/*
 * XREFs of ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1401BFD9C
 * Callers:
 *     NtGdiCreateColorSpace @ 0x1401F26C0 (NtGdiCreateColorSpace.c)
 *     bInitICM @ 0x1402F4C30 (bInitICM.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z @ 0x140034CA0 (-FreeObject@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAXK@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400B40C8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z @ 0x1400C2BB4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C4384 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x140165010 (-AllocateObject@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 */

struct HOBJ__ *__fastcall GreCreateColorSpace(struct _LOGCOLORSPACEEXW *a1)
{
  struct HOBJ__ *v1; // rsi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbp
  __int64 v4; // r9
  __int64 Object; // rdi
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]
  char v9; // [rsp+58h] [rbp-10h]

  v1 = 0LL;
  if ( *(_DWORD *)a1 == 1347637059 && *((_DWORD *)a1 + 1) == 1024 && *((_DWORD *)a1 + 2) == 588 )
  {
    v3 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
    Object = AllocateObject(v3, 0x268u, 9u, v4);
    if ( Object )
    {
      memset(v7, 0, sizeof(v7));
      PushThreadGuardedObject(
        v7,
        (__int64)v7,
        (__int64)UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
      v8 = 0LL;
      v9 = 0;
      v1 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v7, v3, (struct OBJECT *)Object, 9u, 2u);
      if ( v1 )
      {
        *(_DWORD *)(Object + 24) = *(_DWORD *)a1;
        *(_DWORD *)(Object + 28) = *((_DWORD *)a1 + 1);
        *(_DWORD *)(Object + 32) = *((_DWORD *)a1 + 2);
        *(_DWORD *)(Object + 36) = *((_DWORD *)a1 + 3);
        *(_DWORD *)(Object + 40) = *((_DWORD *)a1 + 4);
        *(_OWORD *)(Object + 44) = *(_OWORD *)((char *)a1 + 20);
        *(_OWORD *)(Object + 60) = *(_OWORD *)((char *)a1 + 36);
        *(_DWORD *)(Object + 76) = *((_DWORD *)a1 + 13);
        *(_DWORD *)(Object + 80) = *((_DWORD *)a1 + 14);
        *(_DWORD *)(Object + 84) = *((_DWORD *)a1 + 15);
        *(_DWORD *)(Object + 88) = *((_DWORD *)a1 + 16);
        StringCchCopyW((char *)(Object + 92), 260LL, (char *)a1 + 68);
        *(_DWORD *)(Object + 612) = *((_DWORD *)a1 + 147);
        HmgDecrementShareReferenceCount((__int64)v3, (unsigned int *)Object);
      }
      else
      {
        FreeObject((void **)v3, (void *)Object, 9u);
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v7);
    }
    return v1;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
