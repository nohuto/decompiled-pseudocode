/*
 * XREFs of xxxCreateClassSmIcon @ 0x140069574
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1402262F0 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x140226FA0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     xxxClientCopyImage @ 0x140069484 (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 *a1)
{
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  unsigned int v4; // eax
  int v5; // r11d
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
  v4 = GetDpiForSystem();
  v5 = GetDpiDependentMetric(20, v4);
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 80LL) )
    v6 = **(_QWORD **)(*(_QWORD *)*a1 + 80LL);
  else
    v6 = 0LL;
  v7 = (_QWORD *)xxxClientCopyImage(
                   v6,
                   (unsigned int)(*(_WORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 80LL) + 74LL) != 3) + 1,
                   v5,
                   DpiDependentMetric,
                   0x4000);
  v8 = *(_QWORD *)*a1 + 112LL;
  v9 = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
  if ( v7 )
    *(_QWORD *)(v9 + 56) = *v7;
  else
    *(_QWORD *)(v9 + 56) = 0LL;
  v11[0] = v8;
  v11[1] = v7;
  HMAssignmentLock(v11, 0LL);
  result = *a1;
  if ( *(_QWORD *)(*(_QWORD *)*a1 + 112LL) )
  {
    result = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
