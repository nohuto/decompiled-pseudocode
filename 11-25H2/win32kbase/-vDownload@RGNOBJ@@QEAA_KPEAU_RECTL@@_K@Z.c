/*
 * XREFs of ?vDownload@RGNOBJ@@QEAA_KPEAU_RECTL@@_K@Z @ 0x140027030
 * Callers:
 *     EtwTraceLifetimeAccum @ 0x140026660 (EtwTraceLifetimeAccum.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x140026B64 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::vDownload(RGNOBJ *this, struct _RECTL *a2, __int64 a3)
{
  __int64 v3; // rax
  struct REGION_CORE *v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int **v9; // rdi
  unsigned int *v10; // r8
  int v11; // r9d
  __int64 v12; // rdi
  unsigned __int64 v13; // r10
  unsigned int v14; // ebx
  int v15; // r11d
  struct _RECTL *v16; // rdx
  __int64 v17; // rcx
  struct _RECTL v19; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)this;
  v5 = qword_1402A10B0;
  v7 = *(_QWORD *)this + 24LL;
  v8 = -v3;
  v9 = (unsigned int **)(v7 & -(__int64)(v8 != 0));
  if ( qword_1402A10B0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v5 + 8, 2LL);
    v12 = (*(__int64 (__fastcall **)(unsigned int **, struct _RECTL *, __int64))(*(_QWORD *)v5 + 296LL))(v9, a2, a3);
    ExReleasePushLockSharedEx((char *)v5 + 8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v10 = *v9;
    v11 = *(_DWORD *)((v7 & -(__int64)(v8 != 0)) + 0x18);
    v12 = 0LL;
    while ( v11 )
    {
      --v11;
      v19.top = v10[1];
      v13 = (unsigned __int64)*v10 >> 1;
      v19.bottom = v10[2];
      if ( v13 >= a3 - v12 )
        v13 = a3 - v12;
      v14 = 0;
      if ( v13 )
      {
        v15 = 0;
        v16 = &a2[v12];
        do
        {
          v17 = v15;
          ++v14;
          ++v12;
          v15 += 2;
          v19.left = v10[v17 + 3];
          v19.right = v10[v17 + 4];
          *v16++ = v19;
        }
        while ( v14 < v13 );
      }
      v10 += *v10 + 4;
    }
  }
  return v12;
}
