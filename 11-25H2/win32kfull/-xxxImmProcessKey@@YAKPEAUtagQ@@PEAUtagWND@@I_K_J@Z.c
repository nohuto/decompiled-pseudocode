/*
 * XREFs of ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1401A182C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z @ 0x1401A1A60 (-CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z.c)
 *     GetAppImeCompatFlags @ 0x1401A1D9C (GetAppImeCompatFlags.c)
 *     ClientImmProcessKey @ 0x1401A1DC8 (ClientImmProcessKey.c)
 */

__int64 __fastcall xxxImmProcessKey(struct tagQ *a1, struct tagWND *a2, int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int16 v5; // r15
  int v8; // edi
  __int64 v9; // rsi
  int v10; // ebx
  struct _tagIMEHOTKEYOBJ *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebp
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  unsigned int v19; // ebx
  int AppImeCompatFlags; // ecx
  __int64 result; // rax

  v5 = a4;
  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 480LL);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  if ( v11 )
  {
    v14 = *((_DWORD *)v11 + 2);
    v15 = *((_QWORD *)v11 + 3);
    if ( v14 >= 0x100 && v14 <= 0x11F )
    {
      if ( *(_QWORD *)(v9 + 40) != v15 )
      {
        LOBYTE(v8) = (*(_DWORD *)(W32GetUserSessionState(v13, v12) + 66088) & *(_DWORD *)(v9 + 64)) != 0;
        PostMessage((int)a2, 80, v8, v15);
      }
      return (GetAppImeCompatFlags(*((_QWORD *)a2 + 2)) & 0x800000) == 0;
    }
    v5 = a4;
  }
  else
  {
    v14 = -1;
  }
  v17 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19872);
  if ( (*(_DWORD *)v17 & 4) == 0 )
    return 0LL;
  if ( v14 == -1 )
  {
    if ( !*(_QWORD *)(v9 + 80)
      || !_HMObjectFromHandle(*(_QWORD *)(*((_QWORD *)a2 + 5) + 208LL))
      || (a5 & 0x80000000) != 0 && (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 4) != 0 )
    {
      return 0LL;
    }
    if ( (unsigned int)(v10 - 241) > 0xA || (v18 = 1779, v16 = 1LL, !_bittest(&v18, v10 - 241)) )
      v16 = 0LL;
    if ( (unsigned int)(a3 - 260) <= 1 && v10 != 18 && v10 != 121 && !(_DWORD)v16 )
      return 0LL;
    v17 = *(unsigned int *)(*(_QWORD *)(v9 + 80) + 12LL);
    if ( (v17 & 8) == 0 && !(_DWORD)v16 && (v10 == 18 || (a5 & 0x20000000) != 0) )
      return 0LL;
  }
  if ( v10 == 231 )
    v10 = v5 | (*((unsigned __int16 *)PtiCurrent(v17, v16) + 461) << 16);
  v19 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v9 + 40), v10, a5, v14);
  AppImeCompatFlags = GetAppImeCompatFlags(*((_QWORD *)a2 + 2));
  result = v19 & 0xFFFFFFFE;
  if ( (AppImeCompatFlags & 0x800000) == 0 )
    return v19;
  return result;
}
