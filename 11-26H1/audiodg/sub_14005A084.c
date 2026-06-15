/*
 * XREFs of sub_14005A084 @ 0x14005A084
 * Callers:
 *     sub_14003EB60 @ 0x14003EB60 (sub_14003EB60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005A084(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &unk_1400C8AF0, 24LL, a4);
}
