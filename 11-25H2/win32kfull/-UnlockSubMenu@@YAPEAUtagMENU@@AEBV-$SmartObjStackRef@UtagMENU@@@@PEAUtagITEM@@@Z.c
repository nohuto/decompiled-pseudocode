/*
 * XREFs of ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1401AD4F4
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140048FE0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockSubMenu(__int64 **a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *i; // rcx
  __int64 *v7; // rax
  _QWORD *v8; // rdx

  v4 = a2[2];
  if ( !v4 )
    return 0LL;
  for ( i = (_QWORD *)(v4 + 104); *i; i = (_QWORD *)*i )
  {
    v7 = a1[2];
    if ( !v7 )
      v7 = (__int64 *)**a1;
    v8 = (_QWORD *)*i;
    if ( *(__int64 **)(*i + 8LL) == v7 )
    {
      *i = *v8;
      Win32FreePool(v8);
      break;
    }
  }
  *(_QWORD *)(*a2 + 16LL) = 0LL;
  return HMAssignmentUnlock(a2 + 2);
}
