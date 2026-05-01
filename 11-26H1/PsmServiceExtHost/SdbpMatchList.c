/*
 * XREFs of SdbpMatchList @ 0x180096F88
 * Callers:
 *     SdbpMatchAll @ 0x180096E30 (SdbpMatchAll.c)
 *     SdbpMatchEquality @ 0x180096EE0 (SdbpMatchEquality.c)
 *     SdbpMatchOne @ 0x180097150 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x18008D5B8 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18008D95C (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x180094514 (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpFindMatcher @ 0x180096360 (SdbpFindMatcher.c)
 *     SdbpIsSdbCapabilityPresent @ 0x180096D70 (SdbpIsSdbCapabilityPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpMatchList(
        int *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        BOOL a9)
{
  int v12; // ebx
  int v13; // esi
  unsigned int i; // eax
  unsigned int v15; // edi
  __int64 (__fastcall *Matcher)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // rax
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  int v21; // eax
  int v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+44h] [rbp-1Ch] BYREF
  int v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+4Ch] [rbp-14h]
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF

  v24 = 0;
  v27 = 0LL;
  v12 = 1;
  v23 = 0;
  a9 = 1;
  v13 = 0;
  v26 = 1;
  v25 = 0;
  for ( i = SdbGetFirstChild(a4, a5); ; i = SdbGetNextChild(a4, a5, v15) )
  {
    v15 = i;
    if ( !i )
      break;
    Matcher = (__int64 (__fastcall *)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher(&v27, &v23, a3, a4, i);
    if ( Matcher )
    {
      v18 = Matcher(&a9, a3, a4, a5, v15, a6, v27);
      if ( !v18 )
        return v18;
    }
    else
    {
      if ( v23 == 2 )
      {
        v17 = 1;
      }
      else
      {
        if ( v23 != 3 )
        {
          if ( v23 == 4
            && (unsigned int)Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)(a6 + 80) = 1;
          }
          continue;
        }
        v17 = 0;
      }
      a9 = v17;
    }
    ++v13;
    if ( (unsigned int)SdbFindFirstTag(a4, v15, 4099) )
      a9 = !a9;
    FirstTag = SdbFindFirstTag(a4, v15, 24636);
    if ( FirstTag
      && (StringTagPtr = SdbGetStringTagPtr(a4, FirstTag), SdbpIsSdbCapabilityPresent(&v24, a3, StringTagPtr), v24) )
    {
      v21 = !a9;
      a9 = v21;
    }
    else
    {
      v21 = a9;
    }
    if ( a8 )
    {
      if ( v25 && v26 != v21 )
      {
        v18 = 1;
        v12 = 0;
LABEL_28:
        *a1 = v12;
        goto LABEL_31;
      }
      v25 = 1;
      v26 = v21;
    }
    else if ( v21 == a7 )
    {
      v18 = 1;
      goto LABEL_30;
    }
  }
  v18 = 1;
  if ( a8 )
    goto LABEL_28;
  v21 = a9;
LABEL_30:
  *a1 = v21;
LABEL_31:
  if ( a2 )
    *a2 = v13;
  return v18;
}
