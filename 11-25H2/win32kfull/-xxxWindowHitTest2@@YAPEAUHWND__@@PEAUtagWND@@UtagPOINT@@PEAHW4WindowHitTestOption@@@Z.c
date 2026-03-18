/*
 * XREFs of ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x140021D08
 * Callers:
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002A84C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     xxxWindowFromPoint @ 0x14002E584 (xxxWindowFromPoint.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1401F5CEC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1400213F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x140022254 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002A84C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1401A6B10 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     SizeBoxHwnd @ 0x1402287F8 (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(__int64 a1, tagPOINT a2, int *a3, unsigned int a4)
{
  signed __int32 *v7; // rdi
  const signed __int32 *v8; // r14
  struct tagTHREADINFO **v9; // rsi
  __int64 v10; // rdx
  struct tagTHREADINFO **v11; // rbp
  struct tagTHREADINFO **v12; // r15
  const signed __int32 *v13; // r8
  struct tagTHREADINFO *v14; // rax
  int v15; // ecx
  __int64 v17; // rsi
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rdx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF
  tagPOINT v23; // [rsp+98h] [rbp+10h] BYREF

  v23 = a2;
  v7 = (signed __int32 *)a1;
  if ( !a1 )
    return 0LL;
  v8 = (const signed __int32 *)(a1 + 380);
  v9 = (struct tagTHREADINFO **)(a1 + 40);
  if ( (*(_DWORD *)(a1 + 380) & 0x40000000) == 0
    && ((*((_BYTE *)*v9 + 31) & 0x10) == 0 || !(unsigned int)PtInRect((char *)*v9 + 88)) )
  {
    return 0LL;
  }
  if ( tagWND::PtOutsideClipRgnOrMaxClip((tagWND *)v7, &v23) )
    return 0LL;
  v11 = v9;
  if ( (*((_BYTE *)*v9 + 26) & 8) != 0 )
  {
    if ( !LayerHitTest((struct tagWND *)v7, a2) )
      return 0LL;
    v8 = v7 + 95;
    v11 = (struct tagTHREADINFO **)(v7 + 10);
  }
  v12 = v9;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7, v10) )
  {
    v12 = v11;
    if ( (a4 & 1) != 0 )
    {
      v14 = *v9;
      if ( (*((_BYTE *)*v9 + 31) & 0xC0) != 0x40 )
      {
        v15 = -2;
        goto LABEL_18;
      }
      return 0LL;
    }
  }
  v13 = v8;
  if ( !_bittest(v8, 0x1Eu) && (*((_BYTE *)*v12 + 31) & 0x20) == 0 && (unsigned int)PtInRect((char *)*v12 + 104) )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *((_QWORD *)v7 + 14));
    v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))xxxWindowHitTest)(*((_QWORD *)v7 + 14), a2, a3, a4);
    if ( v17 )
    {
      v20 = PtiCurrent();
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v20, (ULONG_PTR)BugCheckParameter3);
      return v17;
    }
    v18 = PtiCurrent();
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v18, (ULONG_PTR)BugCheckParameter3);
    v13 = v7 + 95;
  }
  LODWORD(v14) = *v13;
  if ( (*v13 & 0x40000000) != 0 || (v14 = PtiCurrent(), *((struct tagTHREADINFO **)v7 + 2) != v14) )
  {
    v15 = 1;
  }
  else
  {
    LODWORD(v14) = xxxSendTransformableMessageTimeout((struct tagWND *)v7, 0x84u, 0, 0, 0LL, 1, 0);
    v15 = (int)v14;
    if ( (_DWORD)v14 == -1 )
      return 0LL;
  }
LABEL_18:
  if ( a3 )
    *a3 = v15;
  v19 = *((_QWORD *)v7 + 5);
  LOBYTE(v14) = ~*(_BYTE *)(v19 + 26);
  if ( v15 == (((unsigned int)v14 >> 6) & 1 | 0x10) && (*(_BYTE *)(v19 + 30) & 4) == 0 )
  {
    v21 = SizeBoxHwnd(v7);
    if ( v21 )
      v7 = (signed __int32 *)v21;
  }
  return *(_QWORD *)v7;
}
