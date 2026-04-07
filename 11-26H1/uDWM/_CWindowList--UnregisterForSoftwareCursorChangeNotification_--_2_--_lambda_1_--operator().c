/*
 * XREFs of _CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1_::operator() @ 0x1800DF71C
 * Callers:
 *     CWindowList::ForEachSoftwareCursorListener__CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___ @ 0x18008C068 (CWindowList--ForEachSoftwareCursorListener__CWindowList--UnregisterForSoftwareCursorChangeNotifi.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1_::operator()(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r10
  __int64 v7; // rdx

  if ( a2 != **(_QWORD **)a1 )
    return 1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = *(_DWORD *)(v3 + 664);
  v6 = *(_QWORD *)(v3 + 640);
  if ( v5 )
  {
    do
    {
      if ( a2 == *(_QWORD *)(v6 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  if ( (unsigned int)v4 < v5 )
  {
    if ( (unsigned int)v4 < v5 - 1 )
    {
      do
      {
        v7 = (unsigned int)(v4 + 1);
        *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8 * v7);
        v4 = v7;
      }
      while ( (unsigned int)v7 < *(_DWORD *)(v3 + 664) - 1 );
    }
    --*(_DWORD *)(v3 + 664);
  }
  return 0;
}
