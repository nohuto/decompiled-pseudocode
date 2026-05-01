/*
 * XREFs of ??$ReadData@K$0BI@@RegistryDataHelper@@AEBAJPEBGKPEAK@Z @ 0x180231914
 * Callers:
 *     ?ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z @ 0x1802BCE34 (-ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

int __fastcall RegistryDataHelper::ReadData<unsigned long,24>(__int64 a1, const WCHAR *a2, int a3, _DWORD *a4)
{
  const WCHAR *v4; // rbx
  bool v5; // cc
  const WCHAR *v10; // rdx
  unsigned int ValueW; // eax
  HKEY v12; // rcx
  unsigned int pdwType; // [rsp+20h] [rbp-48h]
  _DWORD pvData[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD pcbData; // [rsp+70h] [rbp+8h] BYREF

  v4 = (const WCHAR *)(a1 + 8);
  pvData[0] = 0;
  v5 = *(_QWORD *)(a1 + 32) <= 7uLL;
  pcbData = 4;
  v10 = (const WCHAR *)(a1 + 8);
  if ( !v5 )
    v10 = *(const WCHAR **)v4;
  ValueW = RegGetValueW(*(HKEY *)a1, v10, a2, 0x18u, 0LL, pvData, &pcbData);
  if ( ValueW != 2 )
    goto LABEL_9;
  v12 = *(HKEY *)(a1 + 40);
  if ( !v12 )
    goto LABEL_8;
  v5 = *((_QWORD *)v4 + 3) <= 7uLL;
  pcbData = 4;
  if ( !v5 )
    v4 = *(const WCHAR **)v4;
  ValueW = RegGetValueW(v12, v4, a2, 0x18u, 0LL, pvData, &pcbData);
  if ( ValueW == 2 )
  {
LABEL_8:
    *a4 = a3;
  }
  else
  {
LABEL_9:
    if ( ValueW )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x1F0,
               (unsigned int)"shellcommon\\internal\\shell\\inc\\RegistryDataHelper.h",
               (const char *)ValueW,
               pdwType);
    *a4 = pvData[0];
  }
  return 0;
}
