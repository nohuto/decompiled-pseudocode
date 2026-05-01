/*
 * XREFs of ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18005BA40
 * Callers:
 *     ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E804 (-HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004131C (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18005B854 (-HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETER.c)
 * Callees:
 *     <none>
 */

struct _HAM_ACTIVITY *__fastcall HampClientGetFirstActivity(struct _HAM_CLIENT_CONTEXT *a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)a1 + 56);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct _HAM_ACTIVITY *)(*v1 - 48LL);
}
