/*
 * XREFs of ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x14022BAC0
 * Callers:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x14015004C (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x14026936C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x140289620 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall xxxDoLocalTSFWork(
        __int64 a1,
        struct tagWND *a2,
        int a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        struct tagTHREADINFO *a7,
        unsigned int a8)
{
  unsigned int v11; // ebp
  struct tagTHREADINFO *v12; // rax
  struct _KTHREAD **v13; // rdi
  char v14; // r8
  char v15; // r9
  char v16; // dl
  unsigned int v17; // ecx
  struct tagNOTIFY *Notify; // rax
  struct _KTHREAD *v19; // rcx
  _BYTE v20[24]; // [rsp+40h] [rbp-68h] BYREF
  int v21; // [rsp+58h] [rbp-50h]
  unsigned int v22; // [rsp+5Ch] [rbp-4Ch]
  __int64 v23; // [rsp+60h] [rbp-48h]
  int v24; // [rsp+68h] [rbp-40h]
  unsigned int v25; // [rsp+6Ch] [rbp-3Ch]
  unsigned int ThreadId; // [rsp+70h] [rbp-38h]
  unsigned int v27; // [rsp+74h] [rbp-34h]

  v11 = a1;
  v12 = PtiCurrent(a1, (__int64)a2);
  v13 = (struct _KTHREAD **)v12;
  if ( v11 + 2147483646 > 3 || a7 == v12 )
    v14 = a5;
  else
    v14 = a5 | 4;
  v15 = v14 & 0xFD;
  if ( (v14 & 4) == 0 )
    v15 = v14;
  if ( (v15 & 4) != 0
    || a7 != v12
    || !*((_QWORD *)v12 + 62)
    || (v16 = 0, (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0) & 0x1000000C) != 0) )
  {
    v16 = 1;
  }
  v17 = *(_DWORD *)(*((_QWORD *)a7 + 61) + 24LL) & a6;
  if ( (v17 & 0x1700) != 0 && v17 && (v17 & 0xFFFFE8FC) == 0 )
  {
    if ( (v15 & 2) != 0 )
    {
      Notify = CreateNotify(0LL, v11, a2, a3, a4, (PETHREAD *)a7, a8, 1u);
      if ( Notify )
        *((_QWORD *)Notify + 8) = a7;
    }
    else if ( v16 )
    {
      CreateAndPostTSFNotify(v11, a2, a3, a4, a7, a7, a8);
    }
    else
    {
      memset_0(v20, 0, 0x48uLL);
      v22 = v11;
      v21 = 1;
      if ( a2 )
        v23 = *(_QWORD *)a2;
      else
        v23 = 0LL;
      v19 = *v13;
      v24 = a3;
      v25 = a4;
      ThreadId = (unsigned int)PsGetThreadId(v19);
      v27 = a8;
      xxxCallTSFNotifyHook((struct tagNOTIFY *)v20);
    }
  }
}
