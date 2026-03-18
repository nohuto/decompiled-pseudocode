/*
 * XREFs of ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x180078818
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800787AC (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180078884 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(
        const unsigned __int16 *a1,
        _QWORD *a2,
        __int64 a3,
        bool *a4)
{
  int ValueInternal; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(a1, (bool)a2, &v10, a4);
  v6 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    *a2 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueInternal,
      v8);
    return v6;
  }
}
