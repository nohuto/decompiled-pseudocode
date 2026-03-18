/*
 * XREFs of MNFreeItem @ 0x140047A00
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140046AC4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     xxxInsertMenuItem @ 0x140048320 (xxxInsertMenuItem.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall MNFreeItem(__int64 a1, _QWORD *a2, int a3)
{
  struct tagTHREADINFO *v6; // rax
  void *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  struct _HEAD *v12; // rbx
  __int64 result; // rax
  _QWORD **i; // rdx
  _QWORD **v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)(*a2 + 96LL) = 0LL;
  v6 = PtiCurrent(a1, (__int64)a2);
  v16 = gSmartObjNullRef;
  if ( a1 )
  {
    v16 = *(_QWORD *)(a1 + 152);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 152) + 8LL);
  }
  v17[0] = *((_QWORD *)v6 + 209);
  *((_QWORD *)v6 + 209) = v17;
  v17[1] = 0LL;
  v7 = (void *)a2[3];
  if ( v7 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v16 + 24LL) + 136LL), 0, v7);
  *(_QWORD *)(*a2 + 40LL) = 0LL;
  a2[3] = 0LL;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v16);
  v10 = PtiCurrent(v9, v8);
  v18 = (_QWORD *)gSmartObjNullRef;
  if ( a1 )
  {
    v18 = *(_QWORD **)(a1 + 152);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 152) + 8LL);
  }
  v19[0] = *((_QWORD *)v10 + 209);
  *((_QWORD *)v10 + 209) = v19;
  v19[1] = 0LL;
  v11 = a2[2];
  if ( v11 )
  {
    for ( i = (_QWORD **)(v11 + 104); *i; i = (_QWORD **)*i )
    {
      if ( (*i)[1] == *v18 )
      {
        v15 = (_QWORD **)*i;
        *i = (_QWORD *)**i;
        Win32FreePool(v15);
        break;
      }
    }
    *(_QWORD *)(*a2 + 16LL) = 0LL;
    v12 = (struct _HEAD *)HMAssignmentUnlock(a2 + 2);
  }
  else
  {
    v12 = 0LL;
  }
  result = SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v18);
  if ( v12 )
  {
    if ( a3 )
      return DestroyMenu(v12);
  }
  return result;
}
