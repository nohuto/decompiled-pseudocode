/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400875B0
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x140086E10 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x14000CA60 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14001F8B4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400717D8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     PushThreadGuardedObject @ 0x1400988E0 (PushThreadGuardedObject.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1401C6F7C (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(
        BRUSHMEMOBJ *this,
        HBITMAP a2,
        HBITMAP a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  unsigned int v11; // ebx
  struct BRUSH *v12; // rax
  struct BRUSH *v13; // rdi
  _DWORD *v14; // rcx
  _OWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

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
  v12 = BRUSHMEMOBJ::pbrAllocBrush(this, a7);
  *(_QWORD *)this = v12;
  v13 = v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 19) = 0;
    v14 = (_DWORD *)*((_QWORD *)v12 + 6);
    *((_DWORD *)v12 + 20) = 13;
    *((_QWORD *)v12 + 3) = a2;
    *((_QWORD *)v12 + 4) = a3;
    *v14 = 0;
    *((_DWORD *)v12 + 10) = v11;
    if ( a4 )
      *((_DWORD *)v12 + 10) = v11 | 0x20003;
    memset(v16, 0, sizeof(v16));
    PushThreadGuardedObject(
      v16,
      v16,
      UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
    v17 = 0LL;
    if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v16, v13) )
    {
      FreeBrushMemory(v13);
      *(_QWORD *)this = 0LL;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v16);
  }
  return this;
}
