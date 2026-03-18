/*
 * XREFs of ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x14004A800
 * Callers:
 *     bPEBCacheHandle @ 0x140016060 (bPEBCacheHandle.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x14004AC30 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x14004ADBC (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

void __fastcall GdiHandleManager::_IncrementOrDecrementUniqueness(__int64 this, struct OBJECT *a2, char a3)
{
  __int64 v3; // r15
  unsigned int v6; // r9d
  __int64 v7; // r14
  unsigned int v8; // r11d
  __int64 v9; // r8
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // r8d
  unsigned int v18; // ebp
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // r10
  unsigned int v22; // ecx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbx
  struct OBJECT *v27; // rdx
  char v28; // cl
  char v29; // al
  char v30; // cl
  unsigned __int64 v31; // rcx
  unsigned int v32; // edx
  unsigned __int16 v33; // ax
  unsigned int v34; // ebx
  char v35; // di
  __int64 v36; // rsi
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  unsigned int v40; // ebx
  char EtwGdiHandleType; // di
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  bool v45; // zf
  __int64 v46; // rcx
  __int64 v47; // r10
  int v48; // r8d
  unsigned int v49; // edx
  __int64 v50; // r10
  char v51; // [rsp+30h] [rbp-38h]
  char CurrentWin32kSessionId; // [rsp+30h] [rbp-38h]

  v3 = *(_QWORD *)a2;
  v6 = (unsigned __int16)*(_QWORD *)a2 | ((unsigned int)*(_QWORD *)a2 >> 8) & 0xFF0000;
  v7 = this;
  if ( v6 < 0x10000 )
  {
    v8 = (unsigned __int16)*(_QWORD *)a2 | ((unsigned int)*(_QWORD *)a2 >> 8) & 0xFF0000;
  }
  else
  {
    v8 = (unsigned __int16)*(_QWORD *)a2;
    if ( *(_DWORD *)this <= 0x10000u )
    {
      v6 = (unsigned __int16)*(_QWORD *)a2;
    }
    else
    {
      v9 = *(_QWORD *)(this + 16);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)v6 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        v14 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= v10 )
          v11 = (((unsigned __int16)v6 - v10) >> 16) + 1;
        else
          v11 = 0;
        v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
        if ( v11 )
          v13 = (unsigned __int16)v6 + ((1 - v11) << 16) - v10;
        else
          v13 = (unsigned __int16)v6;
        v14 = 0LL;
        if ( (unsigned int)v13 < *(_DWORD *)(v12 + 20) )
          v14 = *(_QWORD *)v12 + 24 * v13;
      }
      v45 = *(unsigned __int8 *)(v14 + 13) == HIWORD(v6);
      v46 = (unsigned __int16)v6;
      if ( !v45 )
        v8 = v6;
      v47 = v9;
      v48 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)v6 >= v10 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16) )
      {
        v15 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= v10 )
          v49 = (((unsigned __int16)v6 - v10) >> 16) + 1;
        else
          v49 = 0;
        v50 = *(_QWORD *)(v47 + 8LL * v49 + 8);
        if ( v49 )
          v46 = ((1 - v49) << 16) - v48 + (unsigned __int16)v6;
        v15 = 0LL;
        if ( (unsigned int)v46 < *(_DWORD *)(v50 + 20) )
          v15 = *(_QWORD *)v50 + 24 * v46;
      }
      this = HIWORD(v6);
      if ( *(unsigned __int8 *)(v15 + 13) == (_DWORD)this )
        v6 = (unsigned __int16)v6;
    }
  }
  v16 = *(_QWORD *)(v7 + 16);
  v17 = *(_DWORD *)(v16 + 2056);
  v18 = v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16);
  if ( v6 >= v18 )
  {
    v21 = 0LL;
  }
  else
  {
    if ( v6 >= v17 )
      this = ((v6 - v17) >> 16) + 1;
    else
      this = 0LL;
    v19 = *(_QWORD *)(v16 + 8LL * (unsigned int)this + 8);
    if ( (_DWORD)this )
      v20 = v6 + ((1 - (_DWORD)this) << 16) - v17;
    else
      v20 = v6;
    v21 = 0LL;
    if ( v20 < *(_DWORD *)(v19 + 20) )
    {
      this = 2LL * (unsigned __int8)v20;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                     + 16LL * (unsigned __int8)v20
                     + 8) )
      {
        this = 3LL * v20;
        v21 = *(_QWORD *)v19 + 24LL * v20;
      }
    }
  }
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)v7 <= 0x10000u )
    {
      v6 = (unsigned __int16)v6;
    }
    else
    {
      if ( (unsigned __int16)v6 >= v18 )
      {
        v25 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v6 >= v17 )
          v22 = (((unsigned __int16)v6 - v17) >> 16) + 1;
        else
          v22 = 0;
        v23 = *(_QWORD *)(v16 + 8LL * v22 + 8);
        if ( v22 )
          v24 = (unsigned __int16)v6 + ((1 - v22) << 16) - v17;
        else
          v24 = (unsigned __int16)v6;
        v25 = 0LL;
        if ( (unsigned int)v24 < *(_DWORD *)(v23 + 20) )
          v25 = *(_QWORD *)v23 + 24 * v24;
      }
      this = HIWORD(v6);
      if ( *(unsigned __int8 *)(v25 + 13) == (_DWORD)this )
        v6 = (unsigned __int16)v6;
    }
  }
  if ( v6 >= v18 )
    goto LABEL_57;
  if ( v6 >= v17 )
    this = ((v6 - v17) >> 16) + 1;
  else
    this = 0LL;
  v26 = *(_QWORD *)(v16 + 8LL * (unsigned int)this + 8);
  if ( (_DWORD)this )
    v6 += ((1 - (_DWORD)this) << 16) - v17;
  if ( v6 >= *(_DWORD *)(v26 + 20) )
  {
LABEL_57:
    v27 = 0LL;
  }
  else
  {
    this = 2LL * (unsigned __int8)v6;
    v27 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                            + 16LL * (unsigned __int8)v6
                            + 8);
  }
  if ( v27 != a2 )
    v21 = 0LL;
  if ( v8 >= 0x10000 || *(_DWORD *)v7 > 0x10000u )
  {
    LOBYTE(this) = *(_BYTE *)(v21 + 14);
    v40 = *(_DWORD *)(v21 + 8) & 0xFFFFFFFE;
    EtwGdiHandleType = GetEtwGdiHandleType(this);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0ppqqq_EtwWriteTransfer(v43, v42, v44, v3, v3, EtwGdiHandleType, CurrentWin32kSessionId, v40);
    }
  }
  else
  {
    v28 = *(_BYTE *)(v21 + 13);
    v29 = v28 - 1;
    v30 = v28 + 1;
    if ( !a3 )
      v30 = v29;
    *(_BYTE *)(v21 + 13) = v30;
    v31 = v8 | ((unsigned __int64)*(unsigned __int16 *)(v21 + 12) << 16);
    v32 = v8 | (*(unsigned __int16 *)(v21 + 12) << 16);
    *(_QWORD *)a2 = v31;
    v33 = v31;
    LOBYTE(v31) = *(_BYTE *)(v21 + 14);
    v34 = *(_DWORD *)(v21 + 8) & 0xFFFFFFFE;
    *(_DWORD *)v21 = v33 | (v32 >> 8) & 0xFF0000;
    v35 = GetEtwGdiHandleType(v31);
    v36 = *(_QWORD *)a2;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      v51 = W32GetCurrentWin32kSessionId();
      McTemplateK0ppqqq_EtwWriteTransfer(v38, v37, v39, v3, v36, v35, v51, v34);
    }
  }
}
