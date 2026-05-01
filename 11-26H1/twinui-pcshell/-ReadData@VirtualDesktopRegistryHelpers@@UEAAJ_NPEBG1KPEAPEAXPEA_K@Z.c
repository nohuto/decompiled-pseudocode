/*
 * XREFs of ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x1801DCB40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180109D54 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

LSTATUS __fastcall VirtualDesktopRegistryHelpers::ReadData(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        void **a6,
        unsigned __int64 *pvData)
{
  void **v7; // rdi
  unsigned __int64 *v9; // rsi
  HKEY v11; // r12
  LSTATUS result; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned __int64 *v15; // rbx
  unsigned int ValueW; // eax
  unsigned __int64 v17; // rax
  unsigned int pdwType; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  DWORD pcbData; // [rsp+78h] [rbp+38h] BYREF

  v7 = a6;
  v9 = pvData;
  *a6 = 0LL;
  *v9 = 0LL;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 3) )
      goto LABEL_3;
LABEL_7:
    v13 = -2147024894;
    v14 = 62LL;
    goto LABEL_8;
  }
  if ( !*((_QWORD *)this + 2) )
    goto LABEL_7;
LABEL_3:
  LODWORD(a6) = 0;
  pcbData = 0;
  v11 = (HKEY)*((_QWORD *)this + a2 + 2);
  result = SHRegGetValueW(v11, a3, a4, 0xFFFF, (DWORD *)&a6, 0LL, &pcbData);
  if ( !result )
  {
    if ( (_DWORD)a6 == a5 )
    {
      pvData = (unsigned __int64 *)CoTaskMemAlloc(pcbData);
      v15 = pvData;
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
      ValueW = SHRegGetValueW(v11, a3, a4, 0xFFFF, 0LL, pvData, &pcbData);
      if ( ValueW )
      {
        v13 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x4A,
                (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
                (const char *)ValueW,
                pdwType);
      }
      else
      {
        v17 = pcbData;
        *v7 = v15;
        v13 = 0;
        *v9 = v17;
        pvData = 0LL;
      }
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&pvData);
      return v13;
    }
    v13 = -2147023267;
    v14 = 70LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)v13);
    return v13;
  }
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
