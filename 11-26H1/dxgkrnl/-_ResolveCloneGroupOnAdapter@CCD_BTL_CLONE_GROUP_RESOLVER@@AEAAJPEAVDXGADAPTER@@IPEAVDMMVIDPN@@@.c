/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x140346D98
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x140345A70 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_0_1_.c)
 * Callees:
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402DB730 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x14033AAE0 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x140345F38 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1403ECF7C (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?QueryMonitorUniqueness@CCD_SET_STRING_ID@@QEBAJIPEAI@Z @ 0x140405DB8 (-QueryMonitorUniqueness@CCD_SET_STRING_ID@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(
        CCD_SET_STRING_ID **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        struct DMMVIDPN *a4)
{
  CCD_SET_STRING_ID *v4; // rbx
  struct DMMVIDPN *v5; // r13
  __int64 v6; // r15
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int16 v11; // r8
  __int64 v12; // rcx
  unsigned int PathSourceFromTarget; // esi
  unsigned int v14; // ebx
  CCD_SET_STRING_ID *v15; // rcx
  int v16; // eax
  __int64 TargetIdFromCcdMonitorId; // r13
  CCD_SET_STRING_ID *v18; // rcx
  int v19; // eax
  CCD_SET_STRING_ID *v20; // rcx
  int v21; // eax
  int v22; // r8d
  char v23; // r9
  __int64 v24; // r8
  unsigned int i; // r8d
  __int64 v26; // rdx
  CCD_SET_STRING_ID *v27; // rcx
  unsigned int j; // ecx
  CCD_SET_STRING_ID *v29; // r8
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int8 v34; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v36; // [rsp+58h] [rbp-28h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v37; // [rsp+5Ch] [rbp-24h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v38; // [rsp+60h] [rbp-20h] BYREF
  int v39; // [rsp+64h] [rbp-1Ch]
  int v40; // [rsp+68h] [rbp-18h]
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int8 v42; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v43; // [rsp+D0h] [rbp+50h] BYREF
  struct DMMVIDPN *v44; // [rsp+D8h] [rbp+58h]

  v44 = a4;
  v4 = *this;
  v5 = a4;
  v6 = a3;
  if ( a3 >= *((unsigned __int16 *)*this + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1600;
  }
  if ( (unsigned int)v6 >= *((unsigned __int16 *)v4 + 16) )
  {
    WdLogSingleEntry5(1LL, -1073741811LL, a2, v6, *this, v6);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 386;
  }
  else
  {
    v9 = *((_QWORD *)v4 + 3);
    v10 = v6 - 1;
    v11 = *(_WORD *)(v9 + 8 * v6 + 2);
    v39 = v11;
    if ( (int)v6 - 1 >= 0 )
    {
      v12 = v10;
      do
      {
        if ( *(_WORD *)(v9 + 8 * v12 + 2) != v11 )
          break;
        --v10;
        --v12;
      }
      while ( v12 >= 0 );
    }
    PathSourceFromTarget = -1;
    v14 = v6;
    v40 = v10 + 1;
    while ( 1 )
    {
      v15 = *this;
      if ( v14 >= *((unsigned __int16 *)*this + 16) )
        goto LABEL_34;
      v43 = 0;
      v16 = CCD_SET_STRING_ID::QueryCloneInfo(v15, v14, &v43, 0LL, 0LL);
      LODWORD(TargetIdFromCcdMonitorId) = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry5(1LL, v16, a2, v6, *this, v14);
        WdLogGlobalForLineNumber = 408;
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      if ( v43 != v39 )
        goto LABEL_33;
      v18 = *this;
      v36 = 0;
      v19 = CCD_SET_STRING_ID::QueryMonitorUniqueness(v18, v14, &v36);
      LODWORD(TargetIdFromCcdMonitorId) = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry5(1LL, v19, a2, v6, *this, v14);
        WdLogGlobalForLineNumber = 427;
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      if ( v36 )
      {
        WdLogSingleEntry5(1LL, a2, v6, *this, v36, v14);
        result = 3221225474LL;
        WdLogGlobalForLineNumber = 439;
        return result;
      }
      v35 = -1;
      v37 = D3DKMDT_VOT_UNINITIALIZED;
      v38 = D3DKMDT_VOT_UNINITIALIZED;
      v20 = *this;
      v34 = 0;
      LOBYTE(v43) = 0;
      v42 = 0;
      UnicodeString = 0LL;
      v21 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v20, v14, &UnicodeString);
      LODWORD(TargetIdFromCcdMonitorId) = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry5(2LL, v21, a2, v6, *this, v14);
        WdLogGlobalForLineNumber = 461;
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                        a2,
                                        &UnicodeString,
                                        v22,
                                        &v35,
                                        &v37,
                                        &v38,
                                        (bool *)&v34,
                                        (unsigned __int8 *)&v43,
                                        &v42);
      RtlFreeUnicodeString(&UnicodeString);
      UnicodeString = 0LL;
      if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
        break;
      if ( (int)TargetIdFromCcdMonitorId < 0 )
      {
        WdLogSingleEntry5(2LL, TargetIdFromCcdMonitorId, a2, v6, *this, v14);
        WdLogGlobalForLineNumber = 505;
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      v23 = v43;
      if ( v14 != (_DWORD)v6 && (_BYTE)v43 )
        goto LABEL_33;
      v5 = v44;
      v24 = 296LL * v14;
      *(_DWORD *)((char *)this[1] + v24 + 84) = v35;
      *(_DWORD *)((char *)this[1] + v24 + 144) = v37;
      *(_DWORD *)((char *)this[1] + v24 + 148) = v38;
      *((_BYTE *)this[1] + v24 + 185) = (v42 != 0 ? 4 : 0) | (v23 != 0 ? 2 : 0) | (v34 != 0);
      *(_DWORD *)((char *)this[1] + v24 + 240) = v40 | 0xFE520000;
      *(_QWORD *)((char *)this[1] + v24 + 56) |= 0xCC00000000000uLL;
      if ( v5 )
      {
        if ( PathSourceFromTarget == -1 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *)((char *)v5 + 96), v35);
          if ( PathSourceFromTarget != -1 )
          {
            for ( i = 0; i < (unsigned int)v6; ++i )
            {
              v26 = 296LL * i;
              v27 = this[1];
              if ( _bittest64((const signed __int64 *)((char *)v27 + v26 + 56), 0x2Du)
                && *(_DWORD *)((char *)v27 + v26 + 80) == PathSourceFromTarget
                && *(_DWORD *)((char *)v27 + v26 + 72) == *((_DWORD *)a2 + 103)
                && *(_DWORD *)((char *)v27 + v26 + 76) == *((_DWORD *)a2 + 104) )
              {
                PathSourceFromTarget = -1;
                break;
              }
            }
          }
        }
      }
      ++v14;
    }
    if ( v14 == (_DWORD)v6 )
      return 3221226021LL;
LABEL_33:
    v5 = v44;
LABEL_34:
    if ( PathSourceFromTarget == -1 )
    {
      if ( v5 )
        return 3221226021LL;
      PathSourceFromTarget = 0;
LABEL_37:
      if ( PathSourceFromTarget >= *(_DWORD *)(*((_QWORD *)a2 + 395) + 96LL) )
        return 3221226021LL;
      for ( j = 0; j < *((unsigned __int16 *)*this + 16); ++j )
      {
        v29 = this[1];
        v30 = 296LL * j;
        if ( _bittest64((const signed __int64 *)((char *)v29 + v30 + 56), 0x2Du)
          && *(_DWORD *)((char *)v29 + v30 + 80) == PathSourceFromTarget
          && *(_DWORD *)((char *)v29 + v30 + 72) == *((_DWORD *)a2 + 103)
          && *(_DWORD *)((char *)v29 + v30 + 76) == *((_DWORD *)a2 + 104) )
        {
          ++PathSourceFromTarget;
          goto LABEL_37;
        }
      }
      if ( PathSourceFromTarget == -1 )
        return 3221226021LL;
    }
    if ( (unsigned int)v6 < v14 )
    {
      v32 = 296 * v6;
      v33 = v14 - (unsigned int)v6;
      do
      {
        v32 += 296LL;
        *(_QWORD *)((char *)this[1] + v32 - 224) = *(_QWORD *)((char *)a2 + 412);
        *(_DWORD *)((char *)this[1] + v32 - 216) = PathSourceFromTarget;
        *(_QWORD *)((char *)this[1] + v32 - 240) |= 0x300000000000uLL;
        --v33;
      }
      while ( v33 );
    }
    return 0LL;
  }
  return result;
}
