/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x140019380
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140019490 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E4C (-TrackObjectReferenceDecrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // edx
  unsigned int *v5; // rsi
  unsigned int v6; // ebp
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int *v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]
  __int16 v16; // [rsp+2Ch] [rbp-1Ch]
  __int64 v17; // [rsp+30h] [rbp-18h]

  v3 = *a2;
  v17 = a1;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  HANDLELOCK::vLockHandle(&v14, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 1LL);
  if ( v15 )
  {
    v5 = v14;
    v6 = a2[2];
    v7 = *((_BYTE *)v14 + 14);
    switch ( v7 )
    {
      case 5:
        v8 = *((_QWORD *)a2 + 85);
        v9 = 3LL;
        break;
      case 4:
        v8 = *((_QWORD *)a2 + 14);
        v9 = 2LL;
        break;
      case 16:
        v8 = *((_QWORD *)a2 + 17);
        v9 = 0LL;
        break;
      default:
        goto LABEL_5;
    }
    TrackObjectReferenceDecrement(a1, v9, v8);
LABEL_5:
    --a2[2];
    v10 = *(__int64 **)(v17 + 8);
    v11 = *v10;
    v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v10 + 96))(v10, *v5);
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 48))(v10, v12);
    KeLeaveCriticalRegion();
    return v6;
  }
  HmgPentryFromPobj(a1);
  return 0LL;
}
