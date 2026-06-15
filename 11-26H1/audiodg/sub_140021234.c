/*
 * XREFs of sub_140021234 @ 0x140021234
 * Callers:
 *     sub_140020F28 @ 0x140020F28 (sub_140020F28.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_1400212F8 @ 0x1400212F8 (sub_1400212F8.c)
 *     sub_14004C84C @ 0x14004C84C (sub_14004C84C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140021234(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // rax
  int v6; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v5 = *(_QWORD **)(a1 + 176);
  try
  {
    while ( v5 )
    {
      if ( v5[1] == a2 )
      {
        if ( v4 )
          LeaveCriticalSection(v4);
        return;
      }
      v5 = (_QWORD *)*v5;
    }
    v6 = sub_1400212F8(a1);
    if ( v6 < 0 )
      sub_140007934(
        (int)retaddr,
        70,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
        v6);
    sub_14004C84C(a1 + 176, &v8);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  catch ( ... )
  {
    sub_140050410(
      retaddr,
      75LL,
      "avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp");
  }
}
