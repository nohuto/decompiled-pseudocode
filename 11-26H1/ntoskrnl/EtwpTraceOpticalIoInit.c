/*
 * XREFs of EtwpTraceOpticalIoInit @ 0x1406C9A00
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1406C9288 (EtwpGetScsiPassThroughCdb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceOpticalIoInit(IRP *a1)
{
  __int64 result; // rax
  char v3; // dl
  int v4; // ecx
  __int16 v5; // r9
  PETHREAD Thread; // rax
  int CurrentRunTime; // ecx
  IRP *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v11[2]; // [rsp+40h] [rbp-28h] BYREF

  result = (__int64)a1->Tail.Overlay.CurrentStackLocation;
  v10 = 0;
  v3 = *(_BYTE *)result;
  if ( *(_BYTE *)result == 3 )
    goto LABEL_12;
  if ( v3 == 4 )
    goto LABEL_11;
  if ( v3 != 9 )
  {
    if ( v3 != 14 )
      return result;
    result = (__int64)EtwpGetScsiPassThroughCdb(a1);
    if ( !result )
      return result;
    LOBYTE(v4) = *(_BYTE *)result;
    if ( *(_BYTE *)result != 40 && (_BYTE)v4 != 0xA8 )
    {
      result = (unsigned int)(v4 - 42);
      if ( (((_BYTE)v4 - 42) & 0x7F) != 0 )
      {
        if ( (_BYTE)v4 != 53 )
          return result;
        goto LABEL_10;
      }
LABEL_11:
      v5 = 315;
      goto LABEL_13;
    }
LABEL_12:
    v5 = 314;
    goto LABEL_13;
  }
LABEL_10:
  v5 = 316;
LABEL_13:
  Thread = a1->Tail.Overlay.Thread;
  v8 = a1;
  if ( Thread )
    CurrentRunTime = Thread[1].CurrentRunTime;
  else
    CurrentRunTime = -1;
  v9 = CurrentRunTime;
  v11[0] = &v8;
  v11[1] = 12LL;
  return EtwTraceKernelEvent((int)v11, 1, 0x80000002, v5, 6297859);
}
