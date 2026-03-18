/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0
 * Callers:
 *     hCreateSolidBrushInternal @ 0x140034D00 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402F4AF8 (bInitBrush.c)
 * Callees:
 *     HmgAllocateObjectAttr @ 0x14000DAE0 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x14000E3A0 (HmgFreeObjectAttr.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x140030308 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400322FC (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400570A0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400B6D54 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C4384 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C43C8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ?GreEncodeUserModePointer@@YAPEAXPEAX@Z @ 0x140102E20 (-GreEncodeUserModePointer@@YAPEAXPEAX@Z.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v9; // rax
  ULONG_PTR v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  char v18; // bl
  struct Gre::Base::SESSION_GLOBALS *v19; // r13
  struct HOBJ__ *inserted; // r12
  ULONG_PTR v21; // rcx
  _QWORD *ObjectAttr; // r15
  void *v23; // rax
  __int64 v25; // [rsp+40h] [rbp-A8h] BYREF
  int v26; // [rsp+48h] [rbp-A0h]
  __int16 v27; // [rsp+4Ch] [rbp-9Ch]
  struct Gre::Base::SESSION_GLOBALS *v28; // [rsp+50h] [rbp-98h]
  struct HOBJ__ *v29; // [rsp+58h] [rbp-90h]
  struct Gre::Base::SESSION_GLOBALS *v30; // [rsp+60h] [rbp-88h]
  struct BRUSH *v31; // [rsp+68h] [rbp-80h]
  struct Gre::Base::SESSION_GLOBALS *v32; // [rsp+70h] [rbp-78h]
  _QWORD *v33; // [rsp+78h] [rbp-70h]
  _DWORD **v34; // [rsp+80h] [rbp-68h]
  _BYTE v35[32]; // [rsp+88h] [rbp-60h] BYREF
  ULONG_PTR v36; // [rsp+A8h] [rbp-40h]

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>::UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>((_OWORD *)this + 1);
  if ( a3 <= 0xC )
  {
    v9 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v10 = (ULONG_PTR)v9;
    v31 = v9;
    *(_QWORD *)this = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 19) = a2;
      *((_DWORD *)v9 + 20) = a3;
      *((_QWORD *)v9 + 3) = 0LL;
      v34 = (_DWORD **)((char *)v9 + 48);
      v11 = *((_QWORD *)v9 + 6);
      **v34 = 0;
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
      v19 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(v11) + 88);
      v30 = v19;
      v32 = v19;
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v35);
      inserted = 0LL;
      v29 = 0LL;
      if ( !v36 )
      {
        inserted = HmgInsertObjectInternal(v19, (struct OBJECT *)v10, 3u, 0x10u);
        v29 = inserted;
        v21 = v36;
        if ( inserted )
          v21 = v10;
        v36 = v21;
      }
      if ( inserted )
      {
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
          v33 = ObjectAttr;
          if ( ObjectAttr )
          {
            v25 = 0LL;
            v26 = 0;
            v27 = 0;
            v28 = v19;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v25, *(struct HOBJ__ **)v10, 0x10u);
            if ( v26 )
            {
              *ObjectAttr = *(_QWORD *)(v10 + 72);
              v23 = GreEncodeUserModePointer(ObjectAttr);
              *(_QWORD *)(v25 + 16) = v23;
              *v34 = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
            }
            HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v25);
          }
        }
      }
      else
      {
        v18 = 1;
        *(_QWORD *)this = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v35);
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
