/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140016520
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     bDeleteRegion @ 0x1400146C0 (bDeleteRegion.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     bPEBCacheHandle @ 0x140016060 (bPEBCacheHandle.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x14001AE78 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgFreeObjectAttr @ 0x14008E9D0 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(OBJECT **this)
{
  unsigned int v1; // esi
  _DWORD *v2; // rbx
  __int64 v4; // rcx
  OBJECT *v5; // rax
  int v6; // edi
  int v7; // ecx
  __int64 v8; // r15
  __int64 v9; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+58h] [rbp-18h]
  __int16 v17; // [rsp+5Ch] [rbp-14h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  v1 = 0;
  v2 = 0LL;
  if ( *this )
  {
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    v4 = *(_QWORD *)(W32GetSessionState() + 88);
    v5 = *this;
    v18 = v4;
    v6 = *(_DWORD *)v5;
    HANDLELOCK::vLockHandle(&v15, (unsigned __int16)*(_DWORD *)v5 | (*(_DWORD *)v5 >> 8) & 0xFF0000u, 0LL);
    v7 = v16;
    if ( !v16 )
      goto LABEL_20;
    if ( *(_BYTE *)(v15 + 14) != 4 || *(_WORD *)(v15 + 12) != HIWORD(v6) )
    {
      HIBYTE(v17) = 1;
      HANDLELOCK::vUnlock((HANDLELOCK *)&v15);
      v7 = v16;
    }
    if ( v7 )
    {
      v8 = HmgPentryFromPobj(*this);
      v9 = *(_QWORD *)(v8 + 16);
      if ( !v9 )
      {
LABEL_10:
        v2 = 0LL;
LABEL_17:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v15);
        goto LABEL_18;
      }
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
      v11 = CurrentProcessWin32Process;
      if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      {
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        goto LABEL_10;
      }
      if ( PsGetProcessWow64Process(*CurrentProcessWin32Process) )
      {
        v12 = *((unsigned int *)v11 + 70);
        v13 = (unsigned int)__ROR4__(v9, 32 - (v11[35] & 0x1F));
      }
      else
      {
        if ( (*((_DWORD *)v11 + 69) & 0x20) != 0 )
          v12 = *((unsigned int *)v11 + 70);
        else
          v12 = v11[35];
        v13 = __ROR8__(v9, 64 - ((unsigned __int8)v12 & 0x3Fu));
      }
      v2 = (_DWORD *)(v12 ^ v13);
      if ( !v2 )
        goto LABEL_17;
      v1 = bPEBCacheHandle(2, v2, (unsigned int *)v8, (HANDLELOCK *)&v15, this);
      if ( !v1 )
        goto LABEL_17;
    }
    else
    {
LABEL_20:
      HIBYTE(v17) = 1;
    }
LABEL_18:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v15);
    if ( v1 )
      return v1;
  }
  v1 = RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this);
  if ( v1 )
  {
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)this);
    if ( v2 )
      HmgFreeObjectAttr(v2);
  }
  return v1;
}
