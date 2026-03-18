/*
 * XREFs of ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x14014F808
 * Callers:
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1401507F4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

char __fastcall IsClassAtomRegistered(struct tagPROCESSINFO *a1, __int16 a2)
{
  __int64 v2; // rbx
  struct tagTHREADINFO *v5; // rax
  char v6; // di
  __int64 **v7; // rax
  __int64 *v8; // rsi
  __int64 **v9; // rcx
  void *CurrentWin32kStackRefLookAside; // rax
  __int64 i; // rsi
  __int64 **v12; // rcx
  void *v13; // rax
  __int64 **v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF

  v2 = *((_QWORD *)a1 + 44);
  v5 = PtiCurrent((__int64)a1);
  v15 = (__int64 **)gSmartObjNullRef;
  v6 = 1;
  if ( v2 )
  {
    v15 = *(__int64 ***)(v2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(v2 + 128) + 8LL);
  }
  v16 = *((_QWORD *)v5 + 209);
  *((_QWORD *)v5 + 209) = &v16;
  while ( 1 )
  {
    v7 = v15;
    if ( !*v15 )
      break;
    if ( *(_WORD *)(*v15)[1] == a2 || *(_WORD *)((*v15)[1] + 2) == a2 )
      goto LABEL_27;
    v8 = (__int64 *)**v15;
    if ( v8 != *v15 )
    {
      v9 = (__int64 **)gSmartObjNullRef;
      if ( v15 != (__int64 **)gSmartObjNullRef )
      {
        if ( !--*((_DWORD *)v15 + 2) && *((_BYTE *)v15 + 12) )
        {
          CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
          Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v15);
        }
        v9 = (__int64 **)gSmartObjNullRef;
      }
      if ( v8 )
      {
        v15 = (__int64 **)v8[16];
        ++*((_DWORD *)v15 + 2);
      }
      else
      {
        v15 = v9;
      }
    }
  }
  for ( i = *((_QWORD *)a1 + 45); ; i = **v15 )
  {
    if ( (__int64 *)i != *v7 )
    {
      v12 = (__int64 **)gSmartObjNullRef;
      if ( v15 != (__int64 **)gSmartObjNullRef )
      {
        if ( !--*((_DWORD *)v15 + 2) && *((_BYTE *)v15 + 12) )
        {
          v13 = GetCurrentWin32kStackRefLookAside();
          Win32FreeToPagedLookasideList(v13, v15);
        }
        v12 = (__int64 **)gSmartObjNullRef;
      }
      if ( i )
      {
        v15 = *(__int64 ***)(i + 128);
        ++*((_DWORD *)v15 + 2);
      }
      else
      {
        v15 = v12;
      }
    }
    if ( !*v15 )
      break;
    if ( *(_WORD *)(*v15)[1] == a2 || *(_WORD *)((*v15)[1] + 2) == a2 )
      goto LABEL_27;
    v7 = v15;
  }
  v6 = 0;
LABEL_27:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v15);
  return v6;
}
