/*
 * XREFs of ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140178B78
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     HmgModifyHandleType @ 0x14006F6A0 (HmgModifyHandleType.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400BB3C0 (--0XDCOBJ@@QEAA@XZ.c)
 *     HmgAlloc @ 0x140177200 (HmgAlloc.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, HDEV a2, unsigned int a3, int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 SessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r8
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rax

  XDCOBJ::XDCOBJ(this);
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 10) = 0;
  if ( a3 <= 2 )
  {
    v8 = (_QWORD *)HmgAlloc(2128LL);
    *(_QWORD *)this = v8;
    v10 = v8;
    if ( v8 )
    {
      if ( a4 )
        HmgModifyHandleType(*v8 | 0x210000LL);
      SessionState = W32GetSessionState(v9);
      v12 = 3LL;
      v13 = 3LL;
      v14 = *(_QWORD *)(SessionState + 88);
      v15 = v10 + 68;
      v16 = (_OWORD *)(v14 + 144);
      do
      {
        *v15 = *v16;
        v15[1] = v16[1];
        v15[2] = v16[2];
        v15[3] = v16[3];
        v15[4] = v16[4];
        v15[5] = v16[5];
        v15[6] = v16[6];
        v15 += 8;
        v17 = v16[7];
        v16 += 8;
        *(v15 - 1) = v17;
        --v13;
      }
      while ( v13 );
      *v15 = *v16;
      v15[1] = v16[1];
      v18 = v16[2];
      v10[122] = v10 + 68;
      v19 = (_OWORD *)(v14 + 584);
      v15[2] = v18;
      v20 = v10 + 10;
      do
      {
        *v20 = *v19;
        v20[1] = v19[1];
        v20[2] = v19[2];
        v20[3] = v19[3];
        v20[4] = v19[4];
        v20[5] = v19[5];
        v20[6] = v19[6];
        v20 += 8;
        v21 = v19[7];
        v19 += 8;
        *(v20 - 1) = v21;
        --v12;
      }
      while ( v12 );
      *v20 = *v19;
      v20[1] = v19[1];
      v20[2] = v19[2];
      v20[3] = v19[3];
      v20[4] = v19[4];
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 136LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 144LL));
      HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(*(_QWORD *)this + 96LL));
      *((_DWORD *)v10 + 8) = a3;
      *(_QWORD *)((char *)v10 + 36) = 0LL;
      *((_DWORD *)v10 + 11) = 0;
      v10[149] = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
      v22 = *(_QWORD *)this + 176LL;
      v10[220] = 0LL;
      v10[157] = v22;
      v10[174] = v22;
      v10[191] = v22;
      v10[208] = v22;
      v10[218] = 0LL;
      *((_DWORD *)v10 + 438) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2092LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2088LL) = -1;
      v23 = *(_QWORD *)this;
      *(_QWORD *)(v23 + 1112) = 0LL;
      *(_QWORD *)(v23 + 1120) = 0LL;
      v10[142] = 0LL;
      v10[259] = 0LL;
      v10[260] = 0LL;
      v10[6] = a2;
    }
  }
  return this;
}
