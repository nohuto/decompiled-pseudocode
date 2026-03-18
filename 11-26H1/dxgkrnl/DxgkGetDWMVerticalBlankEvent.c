/*
 * XREFs of DxgkGetDWMVerticalBlankEvent @ 0x1401B5BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x140406624 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEvent(void *Src)
{
  NTSTATUS DWMVerticalBlankEventInternal; // ebx
  unsigned int v3[4]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v4; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  void *Handle; // [rsp+80h] [rbp+18h] BYREF

  Object = 0LL;
  Handle = 0LL;
  *(_OWORD *)v3 = 0LL;
  v4 = 0LL;
  RtlCopyFromUser(v3, Src, 0x18uLL);
  DWMVerticalBlankEventInternal = DxgkGetDWMVerticalBlankEventInternal(v3[0], v3[1], v3[2], (struct _KEVENT **)&Object);
  if ( DWMVerticalBlankEventInternal >= 0 )
    DWMVerticalBlankEventInternal = ObOpenObjectByPointer(
                                      Object,
                                      0,
                                      0LL,
                                      0x100002u,
                                      (POBJECT_TYPE)ExEventObjectType,
                                      1,
                                      &Handle);
  if ( DWMVerticalBlankEventInternal >= 0 )
    RtlWriteULong64ToUser(v4, (__int64)Handle);
  return (unsigned int)DWMVerticalBlankEventInternal;
}
