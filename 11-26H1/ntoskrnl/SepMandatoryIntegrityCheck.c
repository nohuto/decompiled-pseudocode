/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x1403000E0
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1402FD38C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402FD3E0 (ExIsFastResourceHeldExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(_DWORD *a1, __int64 a2, char a3, __int64 a4, char a5, __int64 a6)
{
  int v6; // eax
  unsigned int v7; // r14d
  char v9; // bp
  char v10; // r12
  char v11; // r13
  __int64 v12; // r15
  int v13; // edi
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int i; // r8d
  void *v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v21; // rbp
  char v22; // cl
  unsigned int v23; // eax
  PSID *v24; // rdx
  PSID v25; // rax
  __int16 *v26; // r9
  int v27; // eax
  int v28; // eax
  unsigned __int16 *v29; // r10
  __int16 v30; // r8
  unsigned __int16 v31; // dx
  unsigned __int16 v32; // r15
  __int64 v33; // rcx
  unsigned __int8 v34; // al
  int v35; // eax
  __int64 v36; // rax
  unsigned __int8 v37; // cl
  int v38; // eax
  __int16 v39; // si
  int v40; // eax
  char v41; // cl
  char v42; // dl
  __int64 result; // rax
  int v44; // eax
  unsigned int v45; // edx
  void *OwnerEntryForLegacyShim; // r15
  char v47; // r8
  char v48; // cl
  int v49; // ecx
  int v50; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v52; // rdx
  int v53; // ecx
  __int16 v54; // [rsp+30h] [rbp-58h]
  char v55; // [rsp+34h] [rbp-54h]
  int v56; // [rsp+38h] [rbp-50h] BYREF
  __int16 v57; // [rsp+3Ch] [rbp-4Ch]
  void *Buf1; // [rsp+40h] [rbp-48h]
  void *Buf2; // [rsp+48h] [rbp-40h]
  unsigned __int16 v62; // [rsp+B8h] [rbp+30h]

  v6 = *(_DWORD *)(a4 + 212);
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = a4;
  v13 = 0;
  *(_DWORD *)(a6 + 8) = v6;
  if ( v6 && v6 != 2 )
  {
    if ( a3 )
      goto LABEL_13;
    v14 = *(_WORD *)(a2 + 2);
    if ( (v14 & 0x10) != 0 )
    {
      if ( v14 >= 0 )
      {
        v16 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v15 = *(unsigned int *)(a2 + 12);
        if ( !(_DWORD)v15 )
          goto LABEL_11;
        v16 = v15 + a2;
      }
      if ( v16 )
      {
        v17 = v16 + 8;
        for ( i = 0; i < *(unsigned __int16 *)(v16 + 4); ++i )
        {
          if ( *(_BYTE *)v17 == 17 )
            goto LABEL_12;
          v17 += *(unsigned __int16 *)(v17 + 2);
        }
      }
    }
LABEL_11:
    v17 = 0LL;
LABEL_12:
    if ( v17 && (*(_BYTE *)(v17 + 1) & 8) == 0 )
    {
      v44 = *(_DWORD *)(v17 + 4);
      v19 = (void *)(v17 + 8);
      v55 = v44;
LABEL_14:
      Buf1 = v19;
      if ( a5 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v21 = *(_QWORD *)(a4 + 48);
        v22 = *(_BYTE *)(v21 + 26);
        if ( (v22 & 0x41) == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v21, 0LL, 0LL);
        if ( (v22 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v52 = KeGetCurrentThread();
          if ( CurrentIrql > 1u )
            KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
          if ( (v52->ApcState.InProgressFlags & 2) != 0 )
            KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
          if ( !CurrentIrql && (v52->MiscFlags & 0x400) == 0 && !v52->WaitBlock[3].SpareLong )
            KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
        if ( (*(_BYTE *)(v21 + 26) & 1) != 0 )
        {
          OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
          if ( !ExAcquireFastResourceShared((__int64 *)v21, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
            || ExIsFastResourceHeldExclusive(v21) )
          {
            ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
          }
          v12 = a4;
        }
        else
        {
          ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), 1);
        }
        v9 = 0;
      }
      v23 = *(_DWORD *)(v12 + 208);
      if ( v23 == -1 || (v24 = (PSID *)(*(_QWORD *)(v12 + 152) + 16LL * v23)) == 0LL )
        v25 = SeUntrustedMandatorySid;
      else
        v25 = *v24;
      Buf2 = v25;
      if ( a5 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v12 + 48));
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
      }
      v26 = (__int16 *)Buf1;
      v27 = *((unsigned __int8 *)Buf1 + 1);
      if ( (_BYTE)v27 )
        v28 = *((_DWORD *)Buf1 + (unsigned int)(v27 - 1) + 2);
      else
        v28 = 0;
      v29 = (unsigned __int16 *)Buf2;
      *(_DWORD *)(a6 + 12) = v28;
      v30 = *v26;
      v54 = *v26;
      v31 = *v29;
      v32 = HIBYTE(*v26);
      v62 = *v29;
      if ( *v26 == *v29 )
      {
        if ( !memcmp(v26, v29, 4LL * v32 + 8) )
          goto LABEL_43;
        v26 = (__int16 *)Buf1;
        v29 = (unsigned __int16 *)Buf2;
        v31 = v62;
        v30 = v54;
      }
      v56 = 0;
      v57 = 4096;
      v33 = 0LL;
      while ( 1 )
      {
        v34 = *((_BYTE *)v29 + v33++ + 2);
        if ( v34 != *((_BYTE *)&v56 + v33 - 1) )
          break;
        if ( v33 == 6 )
        {
          v35 = 0;
          goto LABEL_34;
        }
      }
      v35 = v34 < *((_BYTE *)&v56 + v33 - 1) ? -1 : 1;
LABEL_34:
      if ( v35 )
        goto LABEL_40;
      v36 = 0LL;
      while ( 1 )
      {
        v37 = *((_BYTE *)v26 + v36++ + 2);
        if ( v37 != *((_BYTE *)&v56 + v36 - 1) )
          break;
        if ( v36 == 6 )
        {
          v38 = 0;
          goto LABEL_39;
        }
      }
      v38 = v37 < *((_BYTE *)&v56 + v36 - 1) ? -1 : 1;
LABEL_39:
      if ( v38 )
      {
LABEL_40:
        v7 = -1073741811;
LABEL_49:
        result = v7;
        *(_DWORD *)a6 = v13;
        *(_BYTE *)(a6 + 4) = v9;
        *(_BYTE *)(a6 + 5) = v10;
        *(_BYTE *)(a6 + 6) = v11;
        return result;
      }
      v39 = HIBYTE(v31);
      if ( v31 == v30 )
      {
        v40 = memcmp(v29, v26, 4LL * HIBYTE(v31) + 8);
        v41 = v32;
        if ( !v40 )
          goto LABEL_43;
        v26 = (__int16 *)Buf1;
        v29 = (unsigned __int16 *)Buf2;
      }
      else
      {
        v41 = v32;
      }
      if ( (_BYTE)v39 )
        v45 = *(_DWORD *)&v29[2 * (unsigned __int8)v39 + 2];
      else
        v45 = 0;
      if ( v41 && v45 < *(_DWORD *)&v26[2 * (unsigned __int8)v32 + 2] )
      {
        v42 = 0;
LABEL_44:
        if ( (*(_DWORD *)(a6 + 8) & 1) != 0 && (v10 = 1, v13 = *a1 | ~*a1 & a1[2] | 0x120000, v42) )
        {
          v9 = 1;
          v11 = 1;
          v13 |= a1[3] | 0x11FFFFF;
        }
        else
        {
          v47 = v10;
          v11 = v10;
          if ( !v42 )
          {
            v48 = 0;
            v11 = 0;
            if ( (v55 & 2) == 0 )
              v48 = v10;
            v10 = v48;
            if ( (v55 & 4) == 0 )
              v11 = v47;
            if ( (v55 & 1) != 0 )
              v9 = 0;
            if ( (v55 & 2) != 0 )
            {
              if ( v11 )
                v50 = ~*a1 & a1[2] | 0x100000;
              else
                v50 = 0;
              v13 &= ~(~v50 & (*a1 | 0x20000));
            }
            if ( (v55 & 4) != 0 )
            {
              if ( v10 )
                v53 = *a1 | 0x20000;
              else
                v53 = 0;
              v13 &= ~(~v53 & (a1[2] & ~*a1 | 0x100000));
            }
            if ( (v55 & 1) != 0 )
            {
              v49 = 0;
              if ( v11 )
                v49 = a1[2] & ~*a1 | 0x100000;
              if ( v10 )
                v49 |= *a1 | 0x20000;
              v13 &= ~(~v49 & (a1[1] | 0x10D0000));
            }
          }
        }
        if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
          v13 |= 0x80000u;
        goto LABEL_49;
      }
LABEL_43:
      v42 = 1;
      goto LABEL_44;
    }
LABEL_13:
    v19 = *(void **)&RtlpBootStatHandleLock.SavedApcStateFill[40];
    v55 = 1;
    goto LABEL_14;
  }
  *(_DWORD *)a6 = a1[3];
  result = 0LL;
  *(_WORD *)(a6 + 4) = 257;
  *(_BYTE *)(a6 + 6) = 1;
  return result;
}
