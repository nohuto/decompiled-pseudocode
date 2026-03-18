/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1401C82A8
 * Callers:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14001C97C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     GreZorderSprite @ 0x14001DFD4 (GreZorderSprite.c)
 * Callees:
 *     DwmAsyncZorderSprite @ 0x1401C84C4 (DwmAsyncZorderSprite.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // r8
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  Gre::Base *v11; // rcx
  Gre::Base *v12; // rdx
  Gre::Base **v13; // rax
  struct Gre::Base::SESSION_GLOBALS *v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _OWORD v22[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h]
  _OWORD v24[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+68h] [rbp-8h]

  memset(v22, 0, sizeof(v22));
  PushThreadGuardedObject(
    v22,
    v22,
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  v23 = 0LL;
  v5 = Gre::Base::Globals(v4);
  if ( a1 )
  {
    LOBYTE(v6) = 15;
    v23 = HmgLock(v5, a1, v6, 0LL);
  }
  memset(v24, 0, sizeof(v24));
  PushThreadGuardedObject(
    v24,
    v24,
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  v25 = 0LL;
  v8 = Gre::Base::Globals(v7);
  if ( a2 )
  {
    LOBYTE(v9) = 15;
    v10 = HmgLock(v8, a2, v9, 0LL);
    v25 = v10;
  }
  else
  {
    v10 = v25;
  }
  if ( v23 )
  {
    v11 = (Gre::Base *)((v23 + 24) & -(__int64)(v23 != 0));
    v12 = *(Gre::Base **)v11;
    if ( *(Gre::Base **)(*(_QWORD *)v11 + 8LL) == v11 )
    {
      v13 = *(Gre::Base ***)(((v23 + 24) & -(__int64)(v23 != 0)) + 8);
      if ( *v13 == v11 )
      {
        *v13 = v12;
        *((_QWORD *)v12 + 1) = v13;
        v14 = Gre::Base::Globals(v11);
        v15 = v23 + 24;
        if ( v25 )
        {
          v16 = (_QWORD *)(v15 & -(__int64)(v23 != 0));
          v17 = (_QWORD *)((v25 + 24) & -(__int64)(v25 != 0));
          v18 = *v17;
          if ( *(_QWORD **)(*v17 + 8LL) != v17 )
            goto LABEL_10;
          *v16 = v18;
          v16[1] = v17;
          *(_QWORD *)(v18 + 8) = v16;
          *v17 = v16;
          goto LABEL_12;
        }
        v20 = *((_QWORD *)v14 + 28) + 80LL;
        v21 = (_QWORD *)(v15 & -(__int64)(v23 != 0));
        v17 = *(_QWORD **)v20;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) == v20 )
        {
          *v21 = v17;
          v21[1] = v20;
          v17[1] = v21;
          *(_QWORD *)v20 = v21;
LABEL_12:
          v19 = (void *)UserReferenceDwmApiPort(v17);
          DwmAsyncZorderSprite(v19);
          v10 = v25;
          goto LABEL_13;
        }
      }
    }
LABEL_10:
    __fastfail(3u);
  }
LABEL_13:
  if ( v10 )
    _InterlockedDecrement16((volatile signed __int16 *)(v10 + 12));
  v25 = 0LL;
  PopThreadGuardedObject(v24);
  if ( v23 )
    _InterlockedDecrement16((volatile signed __int16 *)(v23 + 12));
  v23 = 0LL;
  PopThreadGuardedObject(v22);
}
