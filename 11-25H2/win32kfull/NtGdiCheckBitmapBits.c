/*
 * XREFs of NtGdiCheckBitmapBits @ 0x14033DA20
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14033D42C (-GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(
        HDC a1,
        __int64 a2,
        void *a3,
        int a4,
        SIZE_T Size,
        int a6,
        int a7,
        PVOID Address)
{
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  HANDLE v14; // r14
  HANDLE v15; // rax
  void *v16; // rdi
  ULONG v18; // ecx
  _DWORD v19[4]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A8h]
  int v21; // [rsp+58h] [rbp-A0h]
  int v22; // [rsp+5Ch] [rbp-9Ch]
  _QWORD v23[19]; // [rsp+60h] [rbp-98h] BYREF

  v22 = 0;
  v11 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_19;
  v12 = 3LL * (unsigned int)Size;
  if ( v12 > 0xFFFFFFFF || (int)v12 + 3 < (unsigned int)v12 )
  {
    v18 = 534;
LABEL_20:
    EngSetLastError(v18);
    return 0LL;
  }
  v13 = (v12 + 3) & 0xFFFFFFFC;
  if ( a7 != v13 )
  {
LABEL_19:
    v18 = 87;
    goto LABEL_20;
  }
  v19[0] = 5;
  v19[1] = Size;
  v19[2] = 1;
  v19[3] = (v12 + 3) & 0xFFFFFFFC;
  v20 = 0LL;
  v21 = 0;
  if ( v13 && ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = MmSecureVirtualMemory(a3, v13, 2u);
  v15 = MmSecureVirtualMemory(Address, (unsigned int)Size, 4u);
  v16 = v15;
  if ( v14 )
  {
    if ( v15 )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v23, a1);
      if ( v23[0] )
        v11 = GrepCheckBitmapBits(
                (struct XDCOBJ *)v23,
                a2,
                (struct _DEVBITMAPINFO *)v19,
                a3,
                (unsigned __int8 *)Address);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v23);
    }
    MmUnsecureVirtualMemory(v14);
  }
  if ( v16 )
    MmUnsecureVirtualMemory(v16);
  return v11;
}
