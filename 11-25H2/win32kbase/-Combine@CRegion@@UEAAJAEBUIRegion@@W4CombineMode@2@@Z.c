/*
 * XREFs of ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001EBC0
 * Callers:
 *     <none>
 * Callees:
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x140011960 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001E180 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x14001FD84 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140020078 (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017D7A8 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::Combine(_QWORD *a1, __int64 a2, int a3)
{
  _DWORD *v3; // rsi
  int v5; // ecx
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  int v8; // r14d
  Win32kRS *v10; // rbx
  Win32kRS *v11; // rdi
  struct REGION_CORE *v12; // rdx
  Win32kRS *v13; // r12
  __int64 v14; // rax
  struct REGION_CORE *v15; // r14
  unsigned __int8 v16; // r13
  char *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r9
  int v20; // edi
  char v21; // al
  Win32kRS *v22; // rax
  int v24[2]; // [rsp+50h] [rbp-10h] BYREF
  Win32kRS *v25; // [rsp+A0h] [rbp+40h] BYREF
  Win32kRS *v26; // [rsp+B8h] [rbp+58h] BYREF

  v3 = (_DWORD *)a1 + 3;
  v5 = *((_DWORD *)a1 + 3);
  v6 = (_DWORD *)(a2 + 12);
  v7 = 0;
  v8 = a3;
  if ( v5 == 2 )
  {
    if ( *v6 == 2 )
      goto LABEL_6;
    v3 = (_DWORD *)a1 + 3;
  }
  if ( !*v6 )
  {
    if ( a3 != 5 )
      goto LABEL_6;
    goto LABEL_26;
  }
  if ( *v6 == 1 )
  {
    switch ( a3 )
    {
      case 1:
        goto LABEL_6;
      case 2:
LABEL_35:
        (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
        goto LABEL_6;
      case 3:
        return (unsigned int)-2147020579;
    }
    if ( a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_35;
    }
LABEL_26:
    (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    goto LABEL_6;
  }
  if ( !v5 )
    goto LABEL_5;
  if ( v5 != 1 )
    return (unsigned int)-1073741595;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
      goto LABEL_6;
    if ( a3 != 3 && a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_43;
    }
    return (unsigned int)-2147020579;
  }
LABEL_43:
  v8 = 5;
LABEL_5:
  v7 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
  if ( (v7 & 0x80000000) != 0 )
    return v7;
LABEL_6:
  if ( *v3 != 2 || *v6 != 2 )
    return v7;
  v10 = (Win32kRS *)a1[2];
  v11 = *(Win32kRS **)(a2 + 16);
  v26 = v11;
  *(_QWORD *)v24 = v10;
  if ( !v10 || !v11 || (unsigned int)(v8 - 1) > 4 )
    return (unsigned int)-1073741811;
  if ( v8 == 5 )
  {
    if ( RGNCOREOBJ::bCopy((RGNCOREOBJ *)v24, (const struct RGNCOREOBJ *)&v26) )
    {
      a1[2] = v10;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v25);
    v13 = v25;
    if ( v25 )
    {
      v14 = v8;
      v15 = qword_1402A10B0;
      v16 = byte_14025D458[v14];
      if ( qword_1402A10B0 )
      {
        v17 = (char *)qword_1402A10B0 + 8;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx((char *)v15 + 8, 2LL);
        v18 = *(_QWORD *)v15;
        LOBYTE(v19) = v16;
        v20 = (*(__int64 (__fastcall **)(Win32kRS *, Win32kRS *, Win32kRS *, __int64))(v18 + 184))(v13, v10, v11, v19);
        if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v18 + 216))(v13) )
          DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v13, 0LL, 0LL, 0LL, 0LL, 0);
        ExReleasePushLockSharedEx(v17, 2LL);
        KeLeaveCriticalRegion();
        v21 = v20 != 0;
      }
      else
      {
        v21 = RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(
                &v25,
                (Win32kRS **)v24,
                &v26,
                v16,
                (RGNCOREOBJ *)&v25);
      }
      if ( v21 )
      {
        v22 = v25;
        v25 = v10;
        v7 = 0;
        a1[2] = v22;
      }
      else
      {
        v7 = -1073741823;
      }
    }
    else
    {
      v7 = -1073741801;
    }
    RGNCOREOBJ::vDeleteRGNCOREOBJ(&v25, v12);
  }
  return v7;
}
