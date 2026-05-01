/*
 * XREFs of ?SetRestoreRect@ApplicationViewOperation@@UEAAJUtagRECT@@@Z @ 0x180324B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetRestoreRect(ApplicationViewOperation *this, struct tagRECT *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = (__int128)*a2;
  *((_BYTE *)this + 84) = 1;
  result = 0LL;
  *(_OWORD *)((char *)this + 88) = v2;
  return result;
}
