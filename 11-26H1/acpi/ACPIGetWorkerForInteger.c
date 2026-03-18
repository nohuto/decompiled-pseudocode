/*
 * XREFs of ACPIGetWorkerForInteger @ 0x140037430
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     ACPIGetConvertToDevicePresence @ 0x140037624 (ACPIGetConvertToDevicePresence.c)
 *     ACPIGetConvertToClassCode @ 0x140061078 (ACPIGetConvertToClassCode.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIGetWorkerForInteger(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  int v5; // ebx
  _QWORD *v6; // rdx
  unsigned int v8; // ebp
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // r8
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v16; // al
  _QWORD **v17; // r9
  void **v18; // r8
  __int64 v19; // rcx
  _DWORD *v20; // rax

  v5 = a2;
  v6 = (_QWORD *)a4[7];
  v8 = a2 >> 31;
  if ( !v6 )
  {
    v5 = -1073741670;
    goto LABEL_13;
  }
  v11 = *(_DWORD *)a4;
  if ( (*(_DWORD *)a4 & 0x400) != 0 )
  {
    v13 = (_DWORD *)a4[8];
    if ( (v11 & 0x4000000) != 0 || (v19 = a4[3], !_bittest64((const signed __int64 *)(v19 + 8), 0x3Du)) )
    {
      if ( v5 < 0 )
        goto LABEL_13;
      if ( *(_WORD *)(a3 + 2) != 1 )
        goto LABEL_31;
      v14 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v14 = *(_QWORD *)(v19 + 608);
    }
    *v6 = v14;
    if ( v13 )
      *v13 = 8;
    goto LABEL_12;
  }
  if ( (v11 & 0x800) != 0 )
  {
    v12 = ACPIGetConvertToDevicePresence(a4[3], (__int64)v6, a4[8]);
LABEL_5:
    v5 = v12;
    goto LABEL_13;
  }
  if ( (v11 & 0x8000) != 0 )
  {
    v12 = ACPIGetConvertToClassCode(v11, v5, a3, (_DWORD)a4, (__int64)v6, a4[8]);
    goto LABEL_5;
  }
  if ( v5 >= 0 )
  {
    if ( (v11 & 0x4000) != 0 && *(_WORD *)(a3 + 2) != 1 )
    {
LABEL_31:
      v5 = -1072431089;
      goto LABEL_13;
    }
    *(_DWORD *)v6 = *(_DWORD *)(a3 + 16);
    v20 = (_DWORD *)a4[8];
    if ( v20 )
      *v20 = 4;
LABEL_12:
    v5 = 0;
  }
LABEL_13:
  *((_DWORD *)a4 + 18) = v5;
  if ( !(_BYTE)v8 )
  {
    dword_14008ED38 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v15 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v15 )
      v15(a1, (unsigned int)v5, 0LL, a4[6]);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
    v17 = (_QWORD **)a4[1];
    if ( v17[1] != a4 + 1 || (v18 = (void **)a4[2], *v18 != a4 + 1) )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = v18;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink, v16);
    ExFreePoolWithTag(a4, 0);
  }
}
