/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@KHH@Z @ 0x140164CD8
 * Callers:
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z @ 0x140034CA0 (-FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14003FFF0 (--0XDCOBJ@@QEAA@XZ.c)
 *     HmgModifyHandleType @ 0x140057BB0 (HmgModifyHandleType.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ?AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x140165010 (-AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(
        DCMEMOBJ *this,
        struct Gre::Base::SESSION_GLOBALS *a2,
        HDEV a3,
        unsigned int a4,
        int a5)
{
  char *Object; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rax
  __int64 v12; // r8
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  struct OBJECT *v21; // rdx
  _OWORD v23[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-28h]
  char v25; // [rsp+48h] [rbp-20h]

  XDCOBJ::XDCOBJ(this);
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 8) = 0;
  if ( a4 > 2 )
    return this;
  Object = (char *)AllocateObject(a2, 0x880u, 1u);
  *(_QWORD *)this = Object;
  if ( !Object )
    return this;
  v10 = 3LL;
  v11 = Object + 544;
  v12 = 3LL;
  v13 = (_OWORD *)((char *)a2 + 232);
  do
  {
    *v11 = *v13;
    v11[1] = v13[1];
    v11[2] = v13[2];
    v11[3] = v13[3];
    v11[4] = v13[4];
    v11[5] = v13[5];
    v11[6] = v13[6];
    v11 += 8;
    v14 = v13[7];
    v13 += 8;
    *(v11 - 1) = v14;
    --v12;
  }
  while ( v12 );
  *v11 = *v13;
  v11[1] = v13[1];
  v11[2] = v13[2];
  *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)this + 544LL;
  v15 = (_OWORD *)((char *)a2 + 672);
  v16 = (_OWORD *)(*(_QWORD *)this + 80LL);
  do
  {
    *v16 = *v15;
    v16[1] = v15[1];
    v16[2] = v15[2];
    v16[3] = v15[3];
    v16[4] = v15[4];
    v16[5] = v15[5];
    v16[6] = v15[6];
    v16 += 8;
    v17 = v15[7];
    v15 += 8;
    *(v16 - 1) = v17;
    --v10;
  }
  while ( v10 );
  *v16 = *v15;
  v16[1] = v15[1];
  v16[2] = v15[2];
  v16[3] = v15[3];
  v16[4] = v15[4];
  HmgIncrementShareReferenceCount((__int64)a2, *(unsigned int **)(*(_QWORD *)this + 136LL));
  HmgIncrementShareReferenceCount((__int64)a2, *(unsigned int **)(*(_QWORD *)this + 144LL));
  HmgIncrementShareReferenceCount((__int64)a2, *(unsigned int **)(*(_QWORD *)this + 96LL));
  *(_DWORD *)(*(_QWORD *)this + 32LL) = a4;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 1192LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
  v18 = *(_QWORD *)this + 176LL;
  *(_QWORD *)(*(_QWORD *)this + 1256LL) = v18;
  *(_QWORD *)(*(_QWORD *)this + 1392LL) = v18;
  *(_QWORD *)(*(_QWORD *)this + 1528LL) = v18;
  *(_QWORD *)(*(_QWORD *)this + 1664LL) = v18;
  *(_QWORD *)(*(_QWORD *)this + 1760LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 1744LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 1752LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 2112LL) = -1;
  *(_WORD *)(*(_QWORD *)this + 2088LL) = -1;
  v19 = *(_QWORD *)this;
  *(_QWORD *)(v19 + 1112) = 0LL;
  *(_QWORD *)(v19 + 1120) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 1136LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 2072LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 2080LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = a3;
  memset(v23, 0, sizeof(v23));
  PushThreadGuardedObject(
    v23,
    (__int64)v23,
    (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  v20 = *(_QWORD *)this;
  v21 = *(struct OBJECT **)this;
  v24 = 0LL;
  v25 = 1;
  if ( HmgInsertObjectInternal(a2, v21, 0x11u, 1u) )
  {
    v24 = v20;
    if ( !a5 )
      goto LABEL_12;
    HmgModifyHandleType(**(_QWORD **)this | 0x210000LL);
  }
  else
  {
    FreeObject((void **)a2, *(void **)this, 1u);
    *(_QWORD *)this = 0LL;
  }
  v20 = v24;
LABEL_12:
  if ( v20 && !v25 )
    _InterlockedAdd16((volatile signed __int16 *)(v20 + 12), 0xFFFFu);
  PopThreadGuardedObject(v23);
  return this;
}
