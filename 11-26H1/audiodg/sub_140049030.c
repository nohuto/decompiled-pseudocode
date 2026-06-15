/*
 * XREFs of sub_140049030 @ 0x140049030
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400494AC @ 0x1400494AC (sub_1400494AC.c)
 *     sub_14004967C @ 0x14004967C (sub_14004967C.c)
 *     sub_140049E9C @ 0x140049E9C (sub_140049E9C.c)
 *     sub_140049EA8 @ 0x140049EA8 (sub_140049EA8.c)
 *     sub_140049EB4 @ 0x140049EB4 (sub_140049EB4.c)
 *     sub_140049EC0 @ 0x140049EC0 (sub_140049EC0.c)
 *     sub_140049ED4 @ 0x140049ED4 (sub_140049ED4.c)
 *     _guard_check_icall_nop @ 0x140049EE0 (_guard_check_icall_nop.c)
 *     sub_140049F44 @ 0x140049F44 (sub_140049F44.c)
 *     sub_14004A0F8 @ 0x14004A0F8 (sub_14004A0F8.c)
 *     sub_14004A1DC @ 0x14004A1DC (sub_14004A1DC.c)
 *     _o___p__commode @ 0x14004A50A (_o___p__commode.c)
 *     _o__configthreadlocale @ 0x14004A576 (_o__configthreadlocale.c)
 *     _o__configure_wide_argv @ 0x14004A582 (_o__configure_wide_argv.c)
 *     _o__initialize_wide_environment @ 0x14004A5BE (_o__initialize_wide_environment.c)
 *     _o__set_app_type @ 0x14004A604 (_o__set_app_type.c)
 *     _o__set_fmode @ 0x14004A610 (_o__set_fmode.c)
 */

__int64 sub_140049030()
{
  unsigned int v0; // eax
  int v1; // ebx
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 result; // rax

  o__set_app_type(2LL);
  v0 = sub_140049EB4();
  o__set_fmode(v0);
  v1 = sub_140049EA8();
  *(_DWORD *)o___p__commode() = v1;
  if ( !(unsigned __int8)sub_1400494AC(1LL) )
    goto LABEL_6;
  sub_14004A1DC();
  sub_14004967C(sub_14004A220);
  v2 = sub_140049E9C();
  if ( (unsigned int)o__configure_wide_argv(v2) )
    goto LABEL_6;
  sub_140049EC0();
  v3 = sub_140049EA8();
  o__configthreadlocale(v3);
  if ( (unsigned __int8)sub_140049ED4() )
    o__initialize_wide_environment();
  sub_140049EA8();
  result = sub_14004A0F8();
  if ( (_DWORD)result )
  {
LABEL_6:
    sub_140049F44(7LL);
    JUMPOUT(0x1400490D0LL);
  }
  return result;
}
