/*
 * XREFs of ApiSetEditionSystemGenerateMove @ 0x1401C1B74
 * Callers:
 *     zzzDestroyQueue @ 0x1400B8EC0 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionSystemGenerateMove(__int64 a1))(void)
{
  unsigned int v1; // ebx
  __int64 (*result)(void); // rax
  __int64 v3; // rcx

  v1 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6664LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 6672LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD))result)(v1);
    }
  }
  return result;
}
