/*
 * XREFs of ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40
 * Callers:
 *     CreateBitmapStrip @ 0x1400CE890 (CreateBitmapStrip.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400171C0 (GreCreateCompatibleBitmapEx.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x140124AC0 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 *     FillRect @ 0x140126BCC (FillRect.c)
 */

__int64 __fastcall CreateDPIBitmapStrip(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *v5; // rsi
  unsigned int v6; // ebp
  HDC v7; // r14
  int v8; // ebx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int16 *v17; // rsi
  __int16 *v18; // rdi
  __int64 v19; // r13
  LONG v20; // r12d
  LONG v21; // r15d
  int v22; // r8d
  __int16 v23; // bx
  LONG v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HBRUSH v28; // r8
  int v29; // r12d
  int v30; // r15d
  int DpiDependentMetric; // eax
  int v32; // ebx
  int v33; // ebx
  int v34; // eax
  __int64 v35; // rcx
  RECT v36; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v37[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v38; // [rsp+48h] [rbp-30h]

  v2 = a1;
  v36 = 0LL;
  v5 = (__int64 *)(W32GetUserSessionState(a1, a2) + 760LL * (unsigned int)a1 + 43288);
  if ( v2 )
  {
    v6 = 24 * (v2 + 3);
  }
  else
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19904);
    v6 = *(unsigned __int16 *)(v4 + 6998);
  }
  v7 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 56968) + 64LL);
  EnsureOemBitmapInfoForDpiSlot((struct _tagOEMBITMAPSET *)v5, v6);
  v8 = *((_DWORD *)v5 + 3);
  v9 = *((_DWORD *)v5 + 2);
  UserSessionState = W32GetUserSessionState(v11, v10);
  result = (__int64)GreCreateCompatibleBitmapEx(
                      *(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 56LL),
                      v9,
                      v8,
                      0,
                      0LL,
                      0LL);
  v14 = result;
  if ( result )
  {
    GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(v7, v14);
    if ( *v5 )
      GreDeleteObject(*v5);
    *v5 = v14;
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v37);
    v17 = (__int16 *)(v5 + 2);
    v18 = (__int16 *)&unk_140363DE2;
    v19 = 93LL;
    do
    {
      if ( v17[2] )
      {
        v20 = *v17;
        v21 = v17[1];
        v22 = (unsigned __int16)*(v18 - 1);
        v23 = *v18;
        v36.right = v20 + v17[2];
        v24 = v21 + v17[3];
        v36.left = v20;
        v36.top = v21;
        v36.bottom = v24;
        if ( v22 == 0xFFFF )
        {
          if ( (v23 & 1) != 0 )
          {
            if ( *(_DWORD *)(W32GetUserSessionState(v16, v15) + 43264)
              || (v26 = *(_DWORD *)(W32GetUserSessionState(v26, v25) + 66796) & 0x80000010, (_DWORD)v26 != -2147483632) )
            {
              v35 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19904);
              if ( (v23 & 0x100) != 0 )
                v28 = *(HBRUSH *)(v35 + 4720);
              else
                v28 = *(HBRUSH *)(v35 + 4712);
            }
            else
            {
              v27 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19904);
              if ( (v23 & 0x100) != 0 )
                v28 = *(HBRUSH *)(v27 + 4920);
              else
                v28 = *(HBRUSH *)(v27 + 4912);
            }
            FillRect(v7, &v36, v28);
            v29 = v20 + 2;
            v30 = v21 + 2;
            BitBltSysBmp(v7, v29, v30, 4u, 0);
            DpiDependentMetric = GetDpiDependentMetric(12, v6);
            v32 = v29 + DpiDependentMetric;
            BitBltSysBmp(v7, v29 + DpiDependentMetric - 2, v30, 0xEu, 0);
            v33 = GetDpiDependentMetric(12, v6) - 2 + v32;
            BitBltSysBmp(v7, v33, v30, 0, 0);
            v34 = GetDpiDependentMetric(12, v6);
            BitBltSysBmp(v7, v33 + v34, v30, 0xBu, 0);
          }
        }
        else
        {
          DrawFrameControl(v7);
        }
      }
      v17 += 4;
      v18 += 2;
      --v19;
    }
    while ( v19 );
    if ( v37[0] )
      --*(_DWORD *)(v38 + 28);
    return 1LL;
  }
  return result;
}
