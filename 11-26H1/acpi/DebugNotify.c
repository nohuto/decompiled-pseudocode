/*
 * XREFs of DebugNotify @ 0x14006EC80
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     _strupr_0 @ 0x140055D8B (_strupr_0.c)
 *     IsNumber @ 0x14006F33C (IsNumber.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DebugNotify(__int64 a1, char *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  char *v7; // rdx
  unsigned int v8; // ecx
  _BYTE *ObjectPath; // rax
  const char *v10; // rdx
  void *v11; // rdi

  v4 = 0;
  if ( a2 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( (unsigned __int8)IsNumber(a2, 16LL) )
          goto LABEL_17;
        v7 = a2;
        v8 = 221;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2, 0LL, &qword_14008EF78, 1) )
      {
        v7 = a2;
        v8 = 231;
LABEL_11:
        PrintDebugMessage(v8, v7, 0LL, 0LL, 0LL);
        v4 = -2;
      }
    }
  }
  else
  {
    if ( a4 != 2 )
    {
LABEL_10:
      v7 = 0LL;
      v8 = 222;
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_14008EF78);
    v10 = byte_140075A82;
    v11 = ObjectPath;
    if ( ObjectPath )
      v10 = ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v10, qword_14008EF70);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    ghNotify(2LL, (unsigned int)qword_14008EF70, qword_14008EF78 + 120, qword_14008EAE0, DummyCallBack, 0LL);
  }
LABEL_17:
  if ( qword_14008EF78 )
    DereferenceObjectEx(qword_14008EF78);
  return v4;
}
