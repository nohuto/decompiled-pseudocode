/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x140012490
 * Callers:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // rbx
  __int64 v3; // r9
  unsigned int v4; // eax
  __int64 v5; // r10
  __int64 v6; // r15
  unsigned int v7; // r14d
  unsigned int v8; // r11d
  unsigned int v9; // r8d
  char v10; // cl
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r15
  unsigned int v15; // r11d
  unsigned int v16; // edx
  unsigned int v17; // r8d
  char v18; // cl
  __int64 v19; // r14
  __int64 v20; // r10
  __int64 v21; // r12
  unsigned int v22; // r15d
  unsigned int v23; // r11d
  unsigned int v24; // r8d
  char v25; // cl
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // edx
  unsigned int v29; // r9d
  __int64 v30; // r10
  _DWORD *v31; // rdx
  __int64 v32; // r14
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v34; // rbx
  unsigned __int64 v35; // rdx
  __int64 v36; // r14
  unsigned __int64 v37; // r14

  v2 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 5672LL);
    v4 = (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000;
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)v3 <= 0x10000u )
      {
        v4 = (unsigned __int16)*v2;
      }
      else
      {
        v5 = *(_QWORD *)(v3 + 16);
        v6 = 0LL;
        v7 = 0;
        v8 = *(_DWORD *)(v5 + 2056);
        if ( (unsigned __int16)*v2 >= v8 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
        {
          v10 = 0;
        }
        else
        {
          if ( (unsigned __int16)*v2 >= v8 )
            v9 = (((unsigned __int16)*v2 - v8) >> 16) + 1;
          else
            v9 = 0;
          v6 = *(_QWORD *)(v5 + 8LL * v9 + 8);
          if ( v9 )
            v7 = (unsigned __int16)*v2 + ((1 - v9) << 16) - v8;
          else
            v7 = (unsigned __int16)*v2;
          v10 = 1;
        }
        v11 = v10 == 0;
        v12 = 0LL;
        if ( !v11 && v7 < *(_DWORD *)(v6 + 20) )
          v12 = *(_QWORD *)v6 + 24LL * v7;
        if ( *(unsigned __int8 *)(v12 + 13) == HIWORD(v4) )
          v4 = (unsigned __int16)*v2;
      }
    }
    v13 = *(_QWORD *)(v3 + 16);
    v14 = 0LL;
    v15 = 0;
    v16 = *(_DWORD *)(v13 + 2056);
    if ( v4 >= v16 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    {
      v18 = 0;
    }
    else
    {
      if ( v4 >= v16 )
        v17 = ((v4 - v16) >> 16) + 1;
      else
        v17 = 0;
      v14 = *(_QWORD *)(v13 + 8LL * v17 + 8);
      if ( v17 )
        v15 = v4 + ((1 - v17) << 16) - v16;
      else
        v15 = v4;
      v18 = 1;
    }
    v19 = 0LL;
    if ( v18
      && v15 < *(_DWORD *)(v14 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8LL * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8) )
    {
      v19 = *(_QWORD *)v14 + 24LL * v15;
    }
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)v3 <= 0x10000u )
      {
        v4 = (unsigned __int16)*v2;
      }
      else
      {
        v20 = *(_QWORD *)(v3 + 16);
        v21 = 0LL;
        v22 = 0;
        v23 = *(_DWORD *)(v20 + 2056);
        if ( (unsigned __int16)*v2 >= v23 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
        {
          v25 = 0;
        }
        else
        {
          if ( (unsigned __int16)*v2 >= v23 )
            v24 = (((unsigned __int16)*v2 - v23) >> 16) + 1;
          else
            v24 = 0;
          v21 = *(_QWORD *)(v20 + 8LL * v24 + 8);
          if ( v24 )
            v22 = (unsigned __int16)*v2 + ((1 - v24) << 16) - v23;
          else
            v22 = (unsigned __int16)*v2;
          v25 = 1;
        }
        v11 = v25 == 0;
        v26 = 0LL;
        if ( !v11 && v22 < *(_DWORD *)(v21 + 20) )
          v26 = *(_QWORD *)v21 + 24LL * v22;
        if ( *(unsigned __int8 *)(v26 + 13) == HIWORD(v4) )
          v4 = (unsigned __int16)*v2;
      }
    }
    v27 = *(_QWORD *)(v3 + 16);
    v28 = *(_DWORD *)(v27 + 2056);
    if ( v4 >= v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
      goto LABEL_70;
    if ( v4 >= v28 )
      v29 = ((v4 - v28) >> 16) + 1;
    else
      v29 = 0;
    v30 = *(_QWORD *)(v27 + 8LL * v29 + 8);
    if ( v29 )
      v4 += ((1 - v29) << 16) - v28;
    if ( v4 >= *(_DWORD *)(v30 + 20) )
LABEL_70:
      v31 = 0LL;
    else
      v31 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8LL * (v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8);
    if ( v31 != v2 )
      v19 = 0LL;
    v32 = *(_QWORD *)(v19 + 16);
    if ( v32 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
      v34 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
        v34 = 0LL;
      if ( !v34 )
      {
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        return;
      }
      if ( PsGetProcessWow64Process(*v34) )
      {
        v35 = *((unsigned int *)v34 + 70);
        v36 = (unsigned int)__ROR4__(v32, 32 - (v34[35] & 0x1F));
      }
      else
      {
        if ( (*((_DWORD *)v34 + 69) & 0x20) != 0 )
        {
          v35 = *((unsigned int *)v34 + 70);
          v37 = __ROR8__(v32, 64 - ((_BYTE)v34[35] & 0x3Fu)) ^ v35;
LABEL_50:
          if ( v37 )
          {
            if ( (*(_DWORD *)v37 & 0x10) != 0 )
            {
              *(_DWORD *)(v37 + 4) = RGNOBJ::iComplexity(this, (const struct REGION_CORE *)v35);
              *(_OWORD *)(v37 + 8) = *(_OWORD *)(*(_QWORD *)this + 52LL);
            }
          }
          return;
        }
        v35 = v34[35];
        v36 = __ROR8__(v32, 64 - ((_BYTE)v34[35] & 0x3Fu));
      }
      v37 = v35 ^ v36;
      goto LABEL_50;
    }
  }
}
