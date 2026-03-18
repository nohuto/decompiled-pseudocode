/*
 * XREFs of DereferenceClass @ 0x1400B2D10
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyClass @ 0x1400B2E28 (DestroyClass.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall DereferenceClass(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rax
  _QWORD **v8; // rdx
  _QWORD *i; // r8
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+28h] [rbp-8h] BYREF

  v2 = *(_QWORD *)(a2 + 136);
  v5 = PtiCurrent(a1, a2);
  v10 = gSmartObjNullRef;
  if ( v2 )
  {
    v10 = *(_QWORD *)(v2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(v2 + 128) + 8LL);
  }
  v11 = *((_QWORD *)v5 + 209);
  *((_QWORD *)v5 + 209) = &v11;
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 128LL) = 0LL;
  v6 = v10;
  *(_QWORD *)(a2 + 136) = 0LL;
  --*(_DWORD *)(*(_QWORD *)v6 + 72LL);
  if ( *(_QWORD *)v10 != *(_QWORD *)(*(_QWORD *)v10 + 56LL) )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 56LL) + 72LL);
    if ( !*(_DWORD *)(*(_QWORD *)v10 + 72LL) )
    {
      v8 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)v10 + 56LL) + 64LL);
      for ( i = *v8; i != *(_QWORD **)v10; i = (_QWORD *)*i )
        ;
      DestroyClass(a1);
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v10);
}
