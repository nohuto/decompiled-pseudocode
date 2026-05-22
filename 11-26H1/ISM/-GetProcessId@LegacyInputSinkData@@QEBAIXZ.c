/*
 * XREFs of ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x18002DDB8
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18002D8CC (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002DE18 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 */

__int64 __fastcall LegacyInputSinkData::GetProcessId(LegacyInputSinkData *this)
{
  __int64 v1; // rax
  int v3; // edx
  char *i; // rbx
  _DWORD *CompositionInputQueue; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+30h] [rbp-8h] BYREF

  v1 = 0LL;
  v3 = 1;
  do
    v7[v1++] = v3++;
  while ( v1 < 4 );
  for ( i = (char *)v7; ; i += 4 )
  {
    if ( i == &v8 )
      return 0LL;
    CompositionInputQueue = (_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(this, *(unsigned int *)i);
    if ( *CompositionInputQueue == 3 )
      break;
  }
  return (unsigned int)CompositionInputQueue[4];
}
