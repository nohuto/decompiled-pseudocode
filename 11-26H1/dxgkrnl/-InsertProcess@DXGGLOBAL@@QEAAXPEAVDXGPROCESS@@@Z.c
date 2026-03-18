/*
 * XREFs of ?InsertProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140053094
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::InsertProcess(DXGGLOBAL *this, struct DXGPROCESS *a2)
{
  char *v3; // rsi
  char *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v3 = (char *)this + 440;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = (char *)this + 424;
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = (_QWORD *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v7 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v6 = v7;
  *(_QWORD *)((((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)) + 8) = v5;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)v5 = v6;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
