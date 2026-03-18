/*
 * XREFs of RIMGetDevicePropertiesLockfree @ 0x14002C3C0
 * Callers:
 *     RIMGetDeviceProperties @ 0x14002C910 (RIMGetDeviceProperties.c)
 *     NtRIMGetDevicePropertiesLockfree @ 0x1401D8030 (NtRIMGetDevicePropertiesLockfree.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimCopyInstancePathFromRimDev @ 0x1401D77A8 (rimCopyInstancePathFromRimDev.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMGetDevicePropertiesLockfree(__int64 a1, ULONG64 a2, int a3)
{
  int v5; // esi
  char *v6; // rdi
  int v7; // r14d
  const void *v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rcx
  _DWORD *v11; // rdx
  _QWORD *v12; // rdx
  _BYTE *v13; // rdx
  int v14; // eax
  _DWORD *v15; // rcx
  void *v16; // rcx
  _DWORD *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rax
  int v20; // r14d
  _DWORD *v21; // rcx
  _WORD *v22; // rcx
  _WORD *v23; // rcx
  _WORD *v24; // rcx
  void *v25; // rcx
  _DWORD *v26; // rdx
  PVOID Object[2]; // [rsp+20h] [rbp-68h] BYREF
  SIZE_T Length[2]; // [rsp+30h] [rbp-58h] BYREF
  volatile void *Address[2]; // [rsp+40h] [rbp-48h]
  __int64 v31; // [rsp+50h] [rbp-38h]
  __int64 Src; // [rsp+A8h] [rbp+20h] BYREF

  Object[0] = 0LL;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 1LL, 1LL, Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object[0];
    if ( Object[0] )
      v6 = (char *)Object[0] + 72;
    Object[1] = v6;
    LODWORD(Src) = 0;
    *(_OWORD *)Length = 0LL;
    *(_OWORD *)Address = 0LL;
    v31 = 0LL;
    if ( a3 )
    {
      v8 = (const void *)a2;
      if ( a2 >= MmUserProbeAddress )
        v8 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(Length, v8, 0x28uLL);
      v7 = Length[0];
    }
    else
    {
      v7 = *(_DWORD *)a2;
    }
    if ( v7 == 4 )
    {
      v9 = (*((unsigned __int16 *)v6 + 96) >> 1) + 1;
      if ( a3 )
      {
        if ( !Address[0] )
        {
          v11 = (_DWORD *)(a2 + 8);
          if ( a2 + 8 >= MmUserProbeAddress )
            v11 = (_DWORD *)MmUserProbeAddress;
          *v11 = v9;
          goto LABEL_71;
        }
        if ( LODWORD(Length[1]) >= v9 && v9 > 2 )
        {
          ProbeForWrite(Address[0], LODWORD(Length[1]), 4u);
          rimCopyInstancePathFromRimDev(Address[0], v6, v9);
          goto LABEL_71;
        }
      }
      else
      {
        v10 = *(_QWORD *)(a2 + 16);
        if ( !v10 )
        {
          *(_DWORD *)(a2 + 8) = v9;
LABEL_71:
          ObfDereferenceObject(Object[0]);
          return (unsigned int)v5;
        }
        if ( *(_DWORD *)(a2 + 8) >= v9 && v9 > 2 )
        {
          rimCopyInstancePathFromRimDev(v10, v6, v9);
          goto LABEL_71;
        }
      }
    }
    else
    {
      if ( v7 != 5 )
      {
        if ( v7 == 6 )
        {
          if ( a3 )
          {
            v13 = (_BYTE *)(a2 + 8);
            if ( a2 + 8 >= MmUserProbeAddress )
              v13 = (_BYTE *)MmUserProbeAddress;
            *v13 = -__CFSHR__(*((_DWORD *)v6 + 42), 14);
          }
          else
          {
            *(_BYTE *)(a2 + 8) = -__CFSHR__(*((_DWORD *)v6 + 42), 14);
          }
        }
        else
        {
          v14 = *((_DWORD *)v6 + 12);
          if ( v14 == 1 )
          {
            if ( a3 )
            {
              v15 = (_DWORD *)a2;
              if ( a2 >= MmUserProbeAddress )
                v15 = (_DWORD *)MmUserProbeAddress;
              *v15 = 1;
              v16 = (void *)(a2 + 8);
              if ( a2 + 8 >= MmUserProbeAddress )
                v16 = (void *)MmUserProbeAddress;
              RtlCopyVolatileMemory(v16, v6 + 440, 0x1CuLL);
            }
            else
            {
              *(_DWORD *)a2 = 1;
              *(_OWORD *)(a2 + 8) = *(_OWORD *)(v6 + 440);
              *(_QWORD *)(a2 + 24) = *((_QWORD *)v6 + 57);
              *(_DWORD *)(a2 + 32) = *((_DWORD *)v6 + 116);
            }
          }
          else if ( v14 )
          {
            if ( v14 == 2 )
            {
              v19 = 0LL;
              Src = 0LL;
              v20 = 0;
              if ( *((_DWORD *)v6 + 334) )
              {
                v19 = *(_QWORD *)(v6 + 1868);
                Src = v19;
                v20 = *((_DWORD *)v6 + 470);
              }
              if ( a3 )
              {
                v21 = (_DWORD *)a2;
                if ( a2 >= MmUserProbeAddress )
                  v21 = (_DWORD *)MmUserProbeAddress;
                *v21 = 3;
                v22 = (_WORD *)(a2 + 8);
                if ( a2 + 8 >= MmUserProbeAddress )
                  v22 = (_WORD *)MmUserProbeAddress;
                *v22 = *(_WORD *)(*((_QWORD *)v6 + 55) + 110LL);
                v23 = (_WORD *)(a2 + 10);
                if ( a2 + 10 >= MmUserProbeAddress )
                  v23 = (_WORD *)MmUserProbeAddress;
                *v23 = *(_WORD *)(*((_QWORD *)v6 + 55) + 112LL);
                v24 = (_WORD *)(a2 + 12);
                if ( a2 + 12 >= MmUserProbeAddress )
                  v24 = (_WORD *)MmUserProbeAddress;
                *v24 = *(_WORD *)(*((_QWORD *)v6 + 55) + 114LL);
                v25 = (void *)(a2 + 16);
                if ( a2 + 16 >= MmUserProbeAddress )
                  v25 = (void *)MmUserProbeAddress;
                RtlCopyVolatileMemory(v25, &Src, 8uLL);
                v26 = (_DWORD *)(a2 + 24);
                if ( a2 + 24 >= MmUserProbeAddress )
                  v26 = (_DWORD *)MmUserProbeAddress;
                *v26 = v20;
              }
              else
              {
                *(_DWORD *)a2 = 3;
                *(_WORD *)(a2 + 8) = *(_WORD *)(*((_QWORD *)v6 + 55) + 110LL);
                *(_WORD *)(a2 + 10) = *(_WORD *)(*((_QWORD *)v6 + 55) + 112LL);
                *(_WORD *)(a2 + 12) = *(_WORD *)(*((_QWORD *)v6 + 55) + 114LL);
                *(_QWORD *)(a2 + 16) = v19;
                *(_DWORD *)(a2 + 24) = v20;
              }
            }
          }
          else if ( a3 )
          {
            v17 = (_DWORD *)a2;
            if ( a2 >= MmUserProbeAddress )
              v17 = (_DWORD *)MmUserProbeAddress;
            *v17 = 2;
            v18 = (void *)(a2 + 8);
            if ( a2 + 8 >= MmUserProbeAddress )
              v18 = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v18, v6 + 440, 0xCuLL);
          }
          else
          {
            *(_DWORD *)a2 = 2;
            *(_QWORD *)(a2 + 8) = *((_QWORD *)v6 + 55);
            *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 112);
          }
        }
        goto LABEL_71;
      }
      if ( (*((_DWORD *)v6 + 46) & 0x80u) != 0 )
      {
        if ( a3 )
        {
          v12 = (_QWORD *)(a2 + 8);
          if ( a2 + 8 >= MmUserProbeAddress )
            v12 = (_QWORD *)MmUserProbeAddress;
          *v12 = *(_QWORD *)(*((_QWORD *)v6 + 57) + 792LL);
        }
        else
        {
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(*((_QWORD *)v6 + 57) + 792LL);
        }
        goto LABEL_71;
      }
    }
    v5 = -1073741811;
    goto LABEL_71;
  }
  return (unsigned int)v5;
}
