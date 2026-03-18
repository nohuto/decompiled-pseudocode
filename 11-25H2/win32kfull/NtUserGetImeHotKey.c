/*
 * XREFs of NtUserGetImeHotKey @ 0x1401A1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1401A20D0 (-GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(unsigned int a1, unsigned int *a2, unsigned int *a3, HKL *a4)
{
  _DWORD *v5; // rdx
  _DWORD *v6; // rdx
  _QWORD *v7; // rdx
  HKL v8; // rcx
  int ImeHotKey; // ebx
  unsigned int v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+24h] [rbp-34h] BYREF
  HKL *v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF

  v11 = 0;
  v12 = 0;
  v14 = 0LL;
  v13 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  v5 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  v6 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v6 = (_DWORD *)MmUserProbeAddress;
  *v6 = *v6;
  if ( a4 )
  {
    v7 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v13 = (HKL *)&v14;
  }
  ImeHotKey = GetImeHotKey(a1, &v11, &v12, v13);
  if ( ImeHotKey )
  {
    *a2 = v11;
    v8 = (HKL)v12;
    *a3 = v12;
    if ( a4 )
    {
      v8 = *v13;
      *a4 = *v13;
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return ImeHotKey;
}
