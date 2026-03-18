/*
 * XREFs of _lambda_4ad224167d91228276911ab76f1e9490_::operator() @ 0x140361710
 * Callers:
 *     DxgkGetDisplayModeList @ 0x140438C50 (DxgkGetDisplayModeList.c)
 * Callees:
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 */

void *__fastcall lambda_4ad224167d91228276911ab76f1e9490_::operator()(__int64 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  void *result; // rax

  result = RtlCopyToUser(a2, a3, 0x2CuLL);
  if ( a3[4] == -2 && a3[5] == -2 )
  {
    a2[4] = 64;
    a2[5] = 1;
    a2[3] = 64;
  }
  if ( a4 != 21 )
    a2[2] = a4;
  return result;
}
