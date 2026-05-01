/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000E264
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x18000D4C0 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     ??0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18000EBEC (--0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18000ECB0 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18005A638 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F48C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180070958 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memmove_0 @ 0x1800A28CE (memmove_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  int v7; // r14d
  ModernResourceEnforcer::ModernResourceEnforcerWorkItem *v9; // rax
  unsigned __int64 v10; // r15
  _DWORD *v11; // rax
  unsigned int v12; // edx
  _DWORD *v13; // rdi
  _DWORD *v14; // r15
  unsigned __int64 v15; // rbx
  _QWORD *v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  char *v22; // rax
  char *v23; // r12
  size_t v24; // rbx
  char *v25; // rbx
  __int64 v26; // rax
  union _RM_SID *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  ModernResourceEnforcer *v31; // rdi
  ModernResourceEnforcer **v32; // rcx
  size_t v33; // rbx
  _WORD *v34; // rcx
  int v35; // [rsp+30h] [rbp-69h] BYREF
  void *Src; // [rsp+38h] [rbp-61h]
  union _RM_SID *v37; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v40; // [rsp+70h] [rbp-29h]
  int v41; // [rsp+78h] [rbp-21h]
  int v42; // [rsp+7Ch] [rbp-1Dh]
  int *v43; // [rsp+80h] [rbp-19h]
  __int64 v44; // [rsp+88h] [rbp-11h]
  union _RM_SID **v45; // [rsp+90h] [rbp-9h]
  __int64 v46; // [rsp+98h] [rbp-1h]

  Src = a4;
  v35 = a3;
  v37 = a2;
  v7 = 0;
  v9 = (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)operator new(0x98uLL);
  if ( !v9
    || (v11 = (_DWORD *)ModernResourceEnforcer::ModernResourceEnforcerWorkItem::ModernResourceEnforcerWorkItem(v9),
        (v13 = v11) == 0LL) )
  {
    v7 = -1073741801;
LABEL_3:
    v10 = a6;
    goto LABEL_7;
  }
  *v11 = 1;
  v14 = v11 + 2;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
  }
  else
  {
    v15 = 0LL;
  }
  v16 = v11 + 6;
  v17 = 7LL;
  if ( *(_DWORD **)v14 == v14 + 4 )
    v18 = 7LL;
  else
    v18 = (__int64)(*v16 - *(_QWORD *)v14) >> 1;
  if ( v15 <= v18 )
  {
    v33 = 2 * v15;
    memmove_0(*(void **)v14, a4, v33);
    v34 = (_WORD *)(v33 + *(_QWORD *)v14);
    *((_QWORD *)v14 + 1) = v34;
    *v34 = 0;
    goto LABEL_24;
  }
  if ( *(_QWORD **)v14 != v16 )
    v17 = (__int64)(*v16 - *(_QWORD *)v14) >> 1;
  v19 = 2 * v17 + 1;
  v20 = v15;
  if ( v19 >= v15 )
    v20 = v19;
  if ( v20 > 0x3FFFFFFFFFFFFFF7LL )
  {
    if ( v15 > 0x3FFFFFFFFFFFFFF7LL )
      goto LABEL_30;
    v21 = 0x3FFFFFFFFFFFFFF8LL;
  }
  else
  {
    v21 = v20 + 1;
    if ( v20 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    {
LABEL_30:
      v7 = -1073741801;
      ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
        (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v13,
        v12);
      goto LABEL_3;
    }
  }
  *(_QWORD *)&EventDescriptor.Id = 2 * v21;
  v22 = (char *)operator new(2 * v21, (const struct std::nothrow_t *)&std::nothrow);
  v23 = v22;
  if ( !v22 )
    goto LABEL_30;
  v24 = 2 * v15;
  memcpy_0(v22, Src, v24);
  v25 = &v23[v24];
  *(_WORD *)v25 = 0;
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v14);
  v26 = *(_QWORD *)&EventDescriptor.Id - 2LL;
  *(_QWORD *)v14 = v23;
  *((_QWORD *)v14 + 1) = v25;
  *v16 = &v23[v26];
LABEL_24:
  v10 = a6;
  v13[28] = a5;
  v27 = v37;
  *((_QWORD *)v13 + 15) = a6;
  v13[32] = 1;
  v28 = *((_OWORD *)v27 + 1);
  *(_OWORD *)(v13 + 10) = *(_OWORD *)v27;
  v29 = *((_OWORD *)v27 + 2);
  *(_OWORD *)(v13 + 14) = v28;
  v30 = *((_OWORD *)v27 + 3);
  LODWORD(v27) = *((_DWORD *)v27 + 16);
  *(_OWORD *)(v13 + 18) = v29;
  *(_OWORD *)(v13 + 22) = v30;
  v13[26] = (_DWORD)v27;
  v13[27] = v35;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v31 = (ModernResourceEnforcer *)(v13 + 34);
  v32 = (ModernResourceEnforcer **)*((_QWORD *)this + 35);
  if ( *v32 != (ModernResourceEnforcer *)((char *)this + 272) )
    __fastfail(3u);
  *(_QWORD *)v31 = (char *)this + 272;
  *((_QWORD *)v31 + 1) = v32;
  *v32 = v31;
  *((_QWORD *)this + 35) = v31;
  if ( (*((_BYTE *)this + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 33));
    *((_DWORD *)this + 74) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
LABEL_7:
  if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v37 = (union _RM_SID *)v10;
    v44 = 4LL;
    v45 = &v37;
    v35 = v7;
    v43 = &v35;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v46 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v40 = &unk_1800D0FCA;
    UserData.Reserved = 2;
    v41 = 42;
    v42 = 1;
    LODWORD(Src) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
