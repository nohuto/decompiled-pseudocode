/*
 * XREFs of _anonymous_namespace_::IsTestDevice @ 0x1801E8E34
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x180243430 (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool anonymous_namespace_::IsTestDevice()
{
  int v0; // ebx
  LSTATUS ValueW; // eax
  int v2; // ecx
  bool v3; // sf
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF
  DWORD v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 4;
  v0 = 0;
  v6 = 0;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\SQMClient", L"IsTest", 0x10000012u, &v6, &v5, &v7);
  v2 = ValueW;
  if ( !ValueW )
  {
    if ( v6 == 4 )
    {
      if ( v5 > 1 )
        goto LABEL_4;
      v2 = 0;
      LOBYTE(v0) = v5 == 1;
    }
    else
    {
      if ( v7 != 4 || (unsigned __int16)(v5 - 48) > 1u )
        goto LABEL_4;
      LOBYTE(v0) = (_WORD)v5 == 49;
      v2 = 0;
    }
LABEL_3:
    v3 = v2 < 0;
    if ( v2 <= 0 )
      return !v3 && v0 != 0;
    goto LABEL_4;
  }
  if ( ValueW != 234 )
    goto LABEL_3;
LABEL_4:
  v3 = 1;
  return !v3 && v0 != 0;
}
