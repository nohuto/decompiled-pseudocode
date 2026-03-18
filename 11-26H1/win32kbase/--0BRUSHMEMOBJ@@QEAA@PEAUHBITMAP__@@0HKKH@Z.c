/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1400243A0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x140030308 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400322FC (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400B6D54 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z @ 0x1400C2BB4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C4384 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4 (Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline.c)
 *     ?vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x14016C468 (-vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x140188C04 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(
        BRUSHMEMOBJ *this,
        HSURF a2,
        HBITMAP a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  unsigned int v11; // ebx
  struct BRUSH *v12; // rax
  __int64 v13; // rcx
  struct OBJECT *v14; // rdi
  _DWORD *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  __int64 SessionState; // rax
  _QWORD v19[4]; // [rsp+38h] [rbp-31h] BYREF
  unsigned int *v20; // [rsp+58h] [rbp-11h]
  _OWORD v21[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+80h] [rbp+17h]
  char v23; // [rsp+88h] [rbp+1Fh]

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>::UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>((char *)this + 16);
  v11 = a6;
  if ( a5 == 1 )
  {
    v11 = a6 | 0x1000;
  }
  else if ( a5 == 2 )
  {
    v11 = a6 | 0x2000;
  }
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v19);
  v20 = 0LL;
  if ( (unsigned int)Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline()
    && a2
    && (SURFREF::vLockAll((SURFREF *)v19, a2), !v20) )
  {
    SURFREF::~SURFREF((SURFREF *)v19);
  }
  else
  {
    v12 = BRUSHMEMOBJ::pbrAllocBrush(this, a7);
    *(_QWORD *)this = v12;
    v14 = v12;
    if ( v12 )
    {
      v15 = (_DWORD *)*((_QWORD *)v12 + 6);
      *((_DWORD *)v12 + 19) = 0;
      *((_DWORD *)v12 + 20) = 13;
      *((_QWORD *)v12 + 3) = a2;
      *((_QWORD *)v12 + 4) = a3;
      *v15 = 0;
      *((_DWORD *)v12 + 10) = v11;
      if ( a4 )
        *((_DWORD *)v12 + 10) = v11 | 0x20003;
      v16 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v15) + 88);
      memset(v21, 0, sizeof(v21));
      PushThreadGuardedObject(
        v21,
        v21,
        UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
      v22 = 0LL;
      v23 = 0;
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v21, v16, v14, 0x10u, 2u) )
      {
        if ( (unsigned int)Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline() )
          SURFREF::vKeepIt((SURFREF *)v19);
      }
      else
      {
        FreeBrushMemory((ULONG_PTR)v14);
        *(_QWORD *)this = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v21);
    }
    if ( v20 )
    {
      SessionState = W32GetSessionState(v13);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v20);
    }
    PopThreadGuardedObject(v19);
  }
  return this;
}
