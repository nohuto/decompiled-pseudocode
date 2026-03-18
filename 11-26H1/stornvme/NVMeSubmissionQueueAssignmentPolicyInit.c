/*
 * XREFs of NVMeSubmissionQueueAssignmentPolicyInit @ 0x1400190B4
 * Callers:
 *     IoQueuesInitialize @ 0x140014D10 (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSubmissionQueueAssignmentPolicyInit(_DWORD *a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  v1 = a1[40];
  if ( !v1 )
  {
    if ( g_HeteroSystem )
      goto LABEL_10;
    v1 = 1;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    a1[1024] = 0x10000;
    result = 0xFFFFFFFFLL;
    a1[1025] = 98304;
    goto LABEL_12;
  }
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_10;
  v4 = v3 - 1;
  if ( !v4 )
  {
    result = 0xFFFFFFFFLL;
    a1[1024] = -1;
    a1[1025] = -1;
LABEL_12:
    a1[1027] = -1;
    a1[1026] = -1;
    a1[1022] = 0;
    goto LABEL_13;
  }
  if ( v4 == 1 )
  {
    result = 0xFFFFFFFFLL;
    a1[1022] = 1;
    a1[1024] = -1;
    a1[1025] = -1;
    a1[1026] = 0;
    a1[1027] = 0x10000;
LABEL_13:
    a1[1028] = -1;
    a1[1029] = -1;
    goto LABEL_14;
  }
LABEL_10:
  a1[1022] = 1;
  a1[1024] = 65537;
  *(_QWORD *)(a1 + 1025) = 0x20000LL;
  a1[1027] = 98304;
  a1[1028] = 0x10000;
  a1[1029] = 163840;
LABEL_14:
  a1[1023] = 0x8000;
  return result;
}
