/*
 * XREFs of NtGdiCreateDIBSection @ 0x1401613C0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBitmapReal @ 0x14007C73C (GreCreateDIBitmapReal.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015E270 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetBitmapBitsSize @ 0x140164C9C (GreGetBitmapBitsSize.c)
 *     GreGetDCDpiScaleValue @ 0x140195950 (GreGetDCDpiScaleValue.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        int a3,
        char *a4,
        unsigned int a5,
        unsigned int Size,
        char a7,
        __int64 a8,
        ULONG64 a9)
{
  __int64 DIBitmapReal; // r14
  struct tagBITMAPINFO *v12; // rsi
  __int64 v13; // rdx
  __int64 biSize; // r8
  int DCDpiScaleValue; // r8d
  int v16; // r10d
  int biHeight; // eax
  int biWidth; // ecx
  int v19; // eax
  __int64 v20; // r8
  int v21; // r11d
  __int64 v22; // rdx
  int v23; // ebx
  unsigned __int16 v24; // ax
  ULONG v25; // ecx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v27; // rcx
  __int64 CurrentProcess; // rax
  HANDLE v29; // rax
  void *v30; // rbx
  void *v31; // rcx
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-78h] BYREF
  PVOID Object; // [rsp+78h] [rbp-70h] BYREF
  int v35; // [rsp+80h] [rbp-68h]
  int v36[2]; // [rsp+88h] [rbp-60h]
  struct tagBITMAPINFO *v37; // [rsp+90h] [rbp-58h]
  PVOID BaseAddress; // [rsp+98h] [rbp-50h] BYREF
  PVOID v39; // [rsp+A0h] [rbp-48h]
  _DWORD v40[16]; // [rsp+A8h] [rbp-40h] BYREF
  HDC v41; // [rsp+F0h] [rbp+8h]

  v41 = a1;
  DIBitmapReal = 0LL;
  *(_QWORD *)v36 = 0LL;
  v35 = 0;
  if ( a4 )
  {
    v12 = 0LL;
    v37 = 0LL;
    BaseAddress = 0LL;
    if ( Size - 4 <= 0x270FFFC )
    {
      v12 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag(Size, 1886221383LL, 0LL);
      v37 = v12;
      if ( v12 )
      {
        if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v12, a4, Size);
        biSize = v12->bmiHeader.biSize;
        if ( (unsigned int)biSize < 0x28
          || Size < (unsigned int)biSize
          || Size != (unsigned int)GreGetBitmapSizeInternal(v12, a5, biSize) )
        {
          FreeThreadBufferWithTag(v12, v13, biSize);
          v12 = 0LL;
          v37 = 0LL;
        }
      }
      a1 = v41;
    }
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
      {
        v16 = 0x7FFFFFFF / DCDpiScaleValue;
        biHeight = -v12->bmiHeader.biHeight;
        if ( v12->bmiHeader.biHeight > 0 )
          biHeight = v12->bmiHeader.biHeight;
        if ( v16 < biHeight )
          goto LABEL_21;
        biWidth = v12->bmiHeader.biWidth;
        v19 = -biWidth;
        if ( biWidth >= 0 )
          v19 = v12->bmiHeader.biWidth;
        if ( v16 < v19 )
LABEL_21:
          ExRaiseStatus(-1073741675);
        v12->bmiHeader.biHeight *= DCDpiScaleValue;
        v12->bmiHeader.biWidth = DCDpiScaleValue * biWidth;
      }
    }
    if ( v12 )
    {
      v36[0] = GreGetBitmapBitsSize(v12);
      v22 = (unsigned int)v36[0];
      RegionSize = (unsigned int)v36[0];
      if ( !v36[0] )
        goto LABEL_48;
      if ( a2 )
      {
        v40[0] = v21 & 0xFFFF0000;
        v40[1] = 0;
        RegionSize = (unsigned int)v36[0] + (unsigned __int64)(unsigned __int16)v21;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        Object = 0LL;
        v23 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        v39 = Object;
        if ( v23 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess(v27);
          v23 = MmMapViewOfSection(v39, CurrentProcess, &BaseAddress, 0LL, RegionSize, v40, &RegionSize, 1, 0, 4);
          if ( v23 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(v39);
LABEL_33:
          v24 = a3;
          if ( v23 >= 0 )
          {
LABEL_34:
            Object = (char *)BaseAddress + v24;
            v29 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
            v30 = v29;
            v39 = v29;
            if ( v29
              && (DIBitmapReal = GreCreateDIBitmapReal(
                                   v41,
                                   2LL,
                                   (__int64)Object,
                                   (__int64)v12,
                                   a5,
                                   Size,
                                   v36[0],
                                   (__int64)a2,
                                   a3,
                                   (__int64)v29,
                                   a7 & 0x14 | 2u,
                                   a8,
                                   0LL),
                  (*(_QWORD *)v36 = DIBitmapReal) != 0LL) )
            {
              v31 = (void *)a9;
              if ( a9 >= MmUserProbeAddress )
                v31 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v31, &Object, 8uLL);
              v35 = 1;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            if ( !v35 )
            {
              if ( DIBitmapReal )
              {
                bDeleteSurface(DIBitmapReal);
                DIBitmapReal = 0LL;
              }
              else
              {
                if ( v30 )
                  MmUnsecureVirtualMemory(v30);
                if ( a2 )
                {
                  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                }
                else
                {
                  RegionSize = 0LL;
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Object, &RegionSize, 0x8000u);
                }
              }
            }
          }
LABEL_48:
          FreeThreadBufferWithTag(v12, v22, v20);
          return DIBitmapReal;
        }
        v25 = 87;
      }
      else
      {
        v23 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        v24 = 0;
        a3 = 0;
        if ( v23 >= 0 )
          goto LABEL_34;
        v25 = 8;
      }
      EngSetLastError(v25);
      goto LABEL_33;
    }
  }
  return DIBitmapReal;
}
