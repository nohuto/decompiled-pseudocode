/*
 * XREFs of _RegisterClassEx @ 0x1400B2BE4
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x14029C000 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B3A90 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, unsigned __int16 a3, unsigned int a4)
{
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 v11; // bx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  int v16; // [rsp+50h] [rbp+20h] BYREF

  v8 = PtiCurrent(a1, (__int64)a2);
  v14 = gSmartObjNullRef;
  v15 = *((_QWORD *)v8 + 209);
  *((_QWORD *)v8 + 209) = &v15;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(v9) = 7;
    v13 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), v9);
    if ( v13 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL);
  }
  v16 = 0;
  v10 = InternalRegisterClassEx(a1, a3, a4, &v16);
  SmartObjStackRefBase<tagCLS>::operator=(&v14, v10);
  if ( *(_QWORD *)v14 )
  {
    if ( !v16 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) + 24LL) = a2[1];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) + 16LL) = *a2;
    }
    v11 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) + 2LL);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v14);
    return v11;
  }
  else
  {
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v14);
    return 0LL;
  }
}
