/*
 * XREFs of ?GetForegroundAppId@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804831B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetForegroundAppId(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HSTRING *a2)
{
  char *v2; // rcx
  char *v4; // rax
  __int64 v5; // rdx
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 912;
  string = 0LL;
  v4 = v2;
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v4 = *(char **)v2;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)&v4[2 * v5] );
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v2 = *(char **)v2;
  WindowsCreateString((PCNZWCH)v2, v5, &string);
  *a2 = string;
  return 0LL;
}
