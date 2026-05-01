/*
 * XREFs of ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x1801E3D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800A3288 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

LSTATUS __fastcall VirtualDesktopRegistryHelpers::ReadData(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        void **a6,
        unsigned __int64 *pvData)
{
  void **v7; // rdi
  unsigned __int64 *v9; // rsi
  HKEY *v11; // rax
  HKEY *v12; // r9
  HKEY v13; // r12
  LSTATUS result; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned __int64 *v17; // rbx
  unsigned int ValueW; // eax
  unsigned __int64 v19; // rax
  unsigned int pdwType; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF

  v7 = a6;
  v9 = pvData;
  *a6 = 0LL;
  *v9 = 0LL;
  if ( a2 )
  {
    v11 = (HKEY *)((char *)this + 24);
    if ( *((_QWORD *)this + 3) )
    {
      v12 = (HKEY *)((char *)this + 16);
      goto LABEL_4;
    }
LABEL_10:
    v15 = -2147024894;
    v16 = 62LL;
    goto LABEL_11;
  }
  v12 = (HKEY *)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
    goto LABEL_10;
  v11 = (HKEY *)((char *)this + 24);
LABEL_4:
  if ( !a2 )
    v11 = v12;
  LODWORD(a6) = 0;
  pcbData = 0;
  v13 = *v11;
  result = SHRegGetValueW(*v11, a3, a4, 0xFFFF, (DWORD *)&a6, 0LL, &pcbData);
  if ( !result )
  {
    if ( (_DWORD)a6 == a5 )
    {
      pvData = (unsigned __int64 *)CoTaskMemAlloc(pcbData);
      v17 = pvData;
      if ( !pvData )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x49,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
          (const char *)0x8007000ELL);
        CoTaskMemFree(0LL);
        return -2147024882;
      }
      ValueW = SHRegGetValueW(v13, a3, a4, 0xFFFF, 0LL, pvData, &pcbData);
      if ( ValueW )
      {
        v15 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x4A,
                (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
                (const char *)ValueW,
                pdwType);
      }
      else
      {
        pvData = 0LL;
        v19 = pcbData;
        *v7 = v17;
        v15 = 0;
        *v9 = v19;
      }
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&pvData);
      return v15;
    }
    v15 = -2147023267;
    v16 = 70LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)v15);
    return v15;
  }
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
