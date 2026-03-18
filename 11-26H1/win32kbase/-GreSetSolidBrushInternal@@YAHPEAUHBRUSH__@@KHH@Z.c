/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4
 * Callers:
 *     SetSysColor @ 0x14003405C (SetSysColor.c)
 *     GreSetSolidBrush @ 0x140034400 (GreSetSolidBrush.c)
 *     hCreateSolidBrushInternal @ 0x140034D00 (hCreateSolidBrushInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x1400326E0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z.c)
 *     ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x14003293C (-ulGlobalBrushUnique@BRUSH@@QEAAKXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140033590 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140033CE0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x14003437C (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, unsigned int a2, int a3, int a4)
{
  unsigned int v7; // r12d
  unsigned int *v8; // rbx
  unsigned int v9; // eax
  volatile signed __int32 *v10; // rdi
  int v11; // esi
  __int64 v12; // rdx
  int v13; // r8d
  BRUSH *v14; // rcx
  __int64 v15; // rcx
  __int64 SessionState; // rax
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 *v21; // [rsp+20h] [rbp-60h] BYREF
  HSEMAPHORE v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  int v24; // [rsp+38h] [rbp-48h]
  unsigned int *v25[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v26[5]; // [rsp+58h] [rbp-28h] BYREF

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, a1);
  v8 = v25[0];
  if ( v25[0] )
  {
    v9 = v25[0][10];
    if ( (v9 & 0x10) != 0 && ((v9 & 0x200) == 0 || a4) && ((v9 >> 10) & 1) == a3 )
    {
      v10 = 0LL;
      v11 = -1;
      SEMOBJ<20>::SEMOBJ<20>(&v22);
      if ( v8[2] == 1 || a4 )
      {
        v7 = 1;
        v8[19] = a2;
        HANDLELOCK::HANDLELOCK(&v23, v8, 1);
        if ( v24 )
        {
          if ( v8[2] == 1 )
          {
            if ( v8[25] != -1 )
            {
              v18 = v8[10];
              if ( v18 >= 0 )
              {
                v10 = (volatile signed __int32 *)*((_QWORD *)v8 + 15);
                v11 = ((unsigned int)v18 >> 30) & 1;
              }
            }
            v8[24] = 0;
            v8[25] = -1;
            if ( a4 )
            {
              v8[10] &= ~0x80000000;
            }
            else
            {
              v8[20] = 7;
              v8[10] = 20;
            }
          }
          else
          {
            v8[26] = -1;
            v19 = 0LL;
            v8[27] = -1;
            v8[28] = -1;
            v21 = 0LL;
            while ( 1 )
            {
              v20 = HmgSafeNextObjt(v19, 1, &v21);
              v19 = v20;
              if ( !v20 )
                break;
              if ( (unsigned int *)v21[164] == v8 )
                *((_DWORD *)v21 + 79) |= 1u;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
        }
        v8[11] = BRUSH::ulGlobalBrushUnique(v14);
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v23);
      }
      SEMOBJ<20>::vUnlock(&v22, v12, v13);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v10, v11);
        *((_QWORD *)v8 + 15) = 0LL;
      }
      v8 = v25[0];
    }
    if ( v8 )
    {
      XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v25);
      SessionState = W32GetSessionState(v15);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v25[0]);
    }
  }
  PopThreadGuardedObject(v26);
  return v7;
}
