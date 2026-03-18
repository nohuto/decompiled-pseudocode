/*
 * XREFs of ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403E92C0
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x140193010 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z @ 0x1401DA5FC (-KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N5@Z @ 0x140372CF0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 */

__int64 __fastcall DxgkpDriverKnownEscape(
        struct DXGPROCESS *a1,
        struct DXGADAPTER *a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  struct _EX_RUNDOWN_REF *v12; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  _DWORD *v18; // rsi
  int v19; // ebx
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // esi
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // r8d
  struct _EX_RUNDOWN_REF *v29; // rdx
  int v30; // ecx
  struct DXGADAPTERSYNCOBJECT *v31; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v32[24]; // [rsp+58h] [rbp-18h] BYREF

  if ( a4 < 4 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 999;
    return 3221225485LL;
  }
  *a5 = 0;
  switch ( *a3 )
  {
    case 0:
      if ( a4 >= 8 )
      {
        v8 = a3[1];
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
        v9 = (v8 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v9 < *((_DWORD *)a1 + 74) )
        {
          v10 = *((_QWORD *)a1 + 35);
          v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
          if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
          {
            if ( (*(_BYTE *)(v10 + 16 * (((unsigned __int64)v8 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 5 )
            {
              v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16 * (((unsigned __int64)v8 >> 6) & 0xFFFFFF));
LABEL_10:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v12);
              _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
              ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
              KeLeaveCriticalRegion();
              if ( v31 )
              {
                if ( (*((_DWORD *)v31 + 18) & 0x40000) != 0 )
                  a3[1] = *((_DWORD *)v31 + 5);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v31);
                return 0LL;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 1018;
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v31);
              return 3221225485LL;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v12 = 0LL;
        goto LABEL_10;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1011;
      return 3221225485LL;
    case 1:
      if ( a4 < 8 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1031;
        return 3221225485LL;
      }
      v25 = a3[1];
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
      v26 = (v25 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v26 < *((_DWORD *)a1 + 74) )
      {
        v27 = *((_QWORD *)a1 + 35);
        v28 = *(_DWORD *)(v27 + 16 * v26 + 8);
        if ( ((v25 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60) && (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v27 + 16 * (((unsigned __int64)v25 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4 )
          {
            v29 = *(struct _EX_RUNDOWN_REF **)(v27 + 16 * (((unsigned __int64)v25 >> 6) & 0xFFFFFF));
            goto LABEL_61;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v29 = 0LL;
LABEL_61:
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v31, v29);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
      ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( v31 )
      {
        v30 = *((_DWORD *)v31 + 5);
        if ( v30 )
          a3[1] = v30;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v31);
        return 0LL;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1038;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v31);
      return 3221225485LL;
    case 2:
      if ( a4 < 0x30 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1051;
        return 3221225485LL;
      }
      if ( *((_QWORD *)a3 + 1) )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1061;
        return 3221225485LL;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, (struct _KTHREAD **)a1);
      v14 = a3[1];
      v15 = (v14 >> 6) & 0xFFFFFF;
      if ( v15 >= *((_DWORD *)a1 + 74)
        || (v16 = *(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v15 + 8),
            ((v14 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)a1 + 35) + 16LL * v15 + 8) & 0x60))
        || (v16 & 0x2000) != 0
        || (v16 & 0x1F) == 0 )
      {
LABEL_34:
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1069;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
        return 3221225485LL;
      }
      v17 = *((_QWORD *)a1 + 35);
      if ( (*(_BYTE *)(v17 + 16LL * v15 + 8) & 0x1F) != 8 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_34;
      }
      v18 = *(_DWORD **)(v17 + 16LL * v15);
      if ( !v18 || v18[105] != 4 )
        goto LABEL_34;
      v19 = v18[106];
      if ( (v19 & 0x100) == 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1075;
LABEL_50:
        LODWORD(v22) = -1073741811;
        goto LABEL_51;
      }
      if ( *((_BYTE *)a2 + 209) )
      {
        a3[1] = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v18, v14);
LABEL_41:
        *a5 = 1;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
        return 0LL;
      }
      v31 = 0LL;
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v18 + 8));
      DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                               (DXGSYNCOBJECT *)v18,
                               *((struct ADAPTER_RENDER **)a2 + 396),
                               (struct ADAPTER_RENDER ***)&v31,
                               0LL,
                               0LL,
                               0LL,
                               0,
                               0,
                               0);
      v21 = (struct _KTHREAD **)(v18 + 8);
      v22 = DxgAdapterSyncObject;
      DXGFASTMUTEX::Release(v21);
      if ( (int)v22 >= 0 )
      {
        v23 = *((_QWORD *)v31 + 5);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 32);
          *((_QWORD *)a3 + 1) = v24;
          if ( v24 )
            goto LABEL_41;
        }
        else
        {
          *((_QWORD *)a3 + 1) = 0LL;
        }
        if ( (v19 & 0x200) == 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1104;
          goto LABEL_50;
        }
        LODWORD(v22) = 0;
      }
      else
      {
        WdLogSingleEntry2(3LL, (unsigned int)a3[1], v22);
        WdLogGlobalForLineNumber = 1090;
      }
LABEL_51:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      return (unsigned int)v22;
  }
  if ( *a3 != 3 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1117;
    return 3221225485LL;
  }
  return KnownEscapeBuildTestCommandBuffer(a1, a2, a3, a4);
}
