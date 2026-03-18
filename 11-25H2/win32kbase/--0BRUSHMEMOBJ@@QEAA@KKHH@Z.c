/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310
 * Callers:
 *     hCreateSolidBrushInternal @ 0x140087280 (hCreateSolidBrushInternal.c)
 *     GreCreateSolidBrush @ 0x140087840 (GreCreateSolidBrush.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402EA240 (bInitBrush.c)
 * Callees:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x14000CA60 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F87C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14001F8B4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400717D8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgFreeObjectAttr @ 0x14008E9D0 (HmgFreeObjectAttr.c)
 *     HmgAllocateObjectAttr @ 0x14008EC40 (HmgAllocateObjectAttr.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x14008EE10 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     ??0HANDLELOCK@@QEAA@XZ @ 0x1400C8424 (--0HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400CFBA8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1401C6F7C (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v9; // rax
  struct BRUSH *v10; // rdi
  _QWORD *v11; // r13
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  char v18; // bl
  __int64 v19; // rcx
  _QWORD *ObjectAttr; // r15
  void *v21; // rax
  __int64 v23; // [rsp+50h] [rbp-68h] BYREF
  int v24; // [rsp+58h] [rbp-60h]
  _BYTE v25[80]; // [rsp+68h] [rbp-50h] BYREF

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>::UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>((char *)this + 16);
  if ( a3 <= 0xC )
  {
    v9 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v10 = v9;
    *(_QWORD *)this = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 19) = a2;
      *((_DWORD *)v9 + 20) = a3;
      *((_QWORD *)v9 + 3) = 0LL;
      v11 = (_QWORD *)((char *)v9 + 48);
      **((_DWORD **)v9 + 6) = 0;
      if ( a3 >= 6 )
      {
        v12 = a3 - 6;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  v17 = v16 - 1;
                  if ( v17 )
                  {
                    if ( v17 == 1 )
                      *((_DWORD *)v9 + 10) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v9 + 10) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v9 + 10) = 18;
                }
              }
              else
              {
                *((_DWORD *)v9 + 10) = 21;
              }
            }
            else
            {
              *((_DWORD *)v9 + 10) = 17;
            }
          }
          else
          {
            *((_DWORD *)v9 + 10) = 20;
          }
        }
        else
        {
          *((_DWORD *)v9 + 10) = 16;
        }
      }
      else
      {
        *((_DWORD *)v9 + 10) = 32802;
      }
      v18 = 0;
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v25);
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v25, v10) )
      {
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr(v19);
          if ( ObjectAttr )
          {
            HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v23);
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v23, *(struct HOBJ__ **)v10, 0x10u);
            if ( v24 )
            {
              *ObjectAttr = *((_QWORD *)v10 + 9);
              v21 = GreEncodeUserModePointer(ObjectAttr);
              *(_QWORD *)(v23 + 16) = v21;
              *v11 = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
            }
            HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v23);
          }
        }
      }
      else
      {
        v18 = 1;
        *(_QWORD *)this = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v25);
      if ( v18 )
        FreeBrushMemory(v10);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
